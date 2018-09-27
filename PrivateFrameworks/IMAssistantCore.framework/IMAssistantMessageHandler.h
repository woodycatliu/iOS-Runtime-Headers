/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler> {
    IMChatRegistry * _chatRegistry;
    CNContactStore * _contactStore;
    NSString * _intentIdentifier;
    NSArray * _keysToFetch;
}

@property (nonatomic, retain) IMChatRegistry *chatRegistry;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *intentIdentifier;
@property (nonatomic, readonly) NSArray *keysToFetch;
@property (readonly) Class superclass;

+ (id)connectToIMDaemonController;
+ (void)contactStoreDidChange:(id)arg1;
+ (id)handleToContactIdentifierCache;
+ (void)registerForContactStoreChangeNotifications;
+ (id)spiHandleToPersonCache;

- (void).cxx_destruct;
- (id)_initWithContactStore:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)chatRegistry;
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;
- (id)contactIdentifiersMatchingHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandleID:(id)arg1;
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;
- (id)contactStore;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsMatchingINPerson:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (void)forceTriggerResumeNotification;
- (id)initWithContactStore:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithIntentIdentifier:(id)arg1;
- (id)intentIdentifier;
- (id)keysToFetch;
- (id)meContactIdentifier;
- (id)personFromSPIHandle:(id)arg1;
- (void)setChatRegistry:(id)arg1;

@end