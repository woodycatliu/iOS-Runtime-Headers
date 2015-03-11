/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSString;

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int fullSyncVersion : 1; 
    NSData *_beforeDateReceived;
    NSString *_conversationId;
    unsigned int _fullSyncVersion;
    } _has;
}

@property(retain) NSData * beforeDateReceived;
@property(retain) NSString * conversationId;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasBeforeDateReceived;
@property(readonly) BOOL hasConversationId;
@property BOOL hasFullSyncVersion;

- (void).cxx_destruct;
- (id)beforeDateReceived;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasBeforeDateReceived;
- (BOOL)hasConversationId;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBeforeDateReceived:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end