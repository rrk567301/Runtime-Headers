@class NSArray;

@interface TUPrivacyManager : NSObject

@property (class, readonly, nonatomic) TUPrivacyManager *sharedPrivacyManager;

@property (readonly, copy, nonatomic) NSArray *privacyRules;

- (void)dealloc;
- (id)init;
- (void)removeRule:(id)a0;
- (void)addRule:(id)a0;
- (void)_handleBlockListChanged:(id)a0;
- (id)allBlacklistRules;
- (char)isIncomingCommunicationBlockedForBusinessID:(id)a0;
- (char)isIncomingCommunicationBlockedForEmailAddress:(id)a0;
- (char)isIncomingCommunicationBlockedForHandle:(id)a0;
- (char)isIncomingCommunicationBlockedForPhoneNumber:(id)a0;
- (void)setBlockIncomingCommunication:(char)a0 forBusinessID:(id)a1;
- (void)setBlockIncomingCommunication:(char)a0 forEmailAddress:(id)a1;
- (void)setBlockIncomingCommunication:(char)a0 forPhoneNumber:(id)a1;

@end
