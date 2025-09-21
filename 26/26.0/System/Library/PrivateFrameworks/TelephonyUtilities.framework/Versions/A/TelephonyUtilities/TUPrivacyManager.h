@class NSArray;

@interface TUPrivacyManager : NSObject

@property (class, readonly, nonatomic) TUPrivacyManager *sharedPrivacyManager;

@property (readonly, copy, nonatomic) NSArray *privacyRules;

- (id)allBlacklistRules;
- (void)dealloc;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)a0;
- (void)removeRule:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forEmailAddress:(id)a1;
- (void)setBlockIncomingCommunication:(BOOL)a0 forBusinessID:(id)a1;
- (id)init;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForBusinessID:(id)a0;
- (BOOL)isIncomingCommunicationBlockedForHandle:(id)a0;
- (void)_handleBlockListChanged:(id)a0;
- (void)setBlockIncomingCommunication:(BOOL)a0 forPhoneNumber:(id)a1;
- (void)addRule:(id)a0;

@end
