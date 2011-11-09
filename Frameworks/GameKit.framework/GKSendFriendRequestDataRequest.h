/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSNumber, NSString;

@interface GKSendFriendRequestDataRequest : GKDataRequest  {
    int _recipientType;
    id _recipients;
    NSString *_message;
    id _results;
    NSNumber *_rid;
}

@property int recipientType;
@property(retain) id recipients;
@property(copy) NSString * message;
@property(retain) NSNumber * rid;
@property(retain) id results;


- (id)errorForResponse:(id)arg1;
- (void)processResults:(id)arg1 errorDict:(id)arg2 forKey:(id)arg3 recipients:(id)arg4;
- (id)recipients;
- (int)recipientType;
- (id)rid;
- (void)setRid:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRecipientType:(int)arg1;
- (void)handleResponseFromServer:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)key;
- (id)request;
- (id)results;
- (void)setResults:(id)arg1;
- (void)dealloc;

@end