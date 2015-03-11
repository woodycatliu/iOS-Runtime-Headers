/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand {
}

@property(copy) NSURL * voiceMailId;

+ (id)playVoiceMail;
+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)_afui_isUsefulUserResultCommand;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setVoiceMailId:(id)arg1;
- (id)voiceMailId;

@end