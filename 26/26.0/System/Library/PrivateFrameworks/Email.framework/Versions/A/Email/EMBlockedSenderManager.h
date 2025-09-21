@class NSSet, EFLocked, NSString;
@protocol EFScheduler;

@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader, EMBlockedSenderWriter> {
    struct atomic_flag { _Atomic BOOL _Value; } _didRemoveObservers;
}

@property (retain, nonatomic) EFLocked *blockedSenderCache;
@property (retain, nonatomic) id<EFScheduler> notificationScheduler;
@property (nonatomic, getter=isMoveToTrashEnabled) BOOL moveToTrashEnabled;
@property (nonatomic, getter=isBlockedSenderEnabled) BOOL blockedSenderEnabled;
@property (readonly, copy, nonatomic) NSSet *blockedSenderEmailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPromptForBlockedSender:(BOOL)a0;
+ (BOOL)shouldMoveToTrashForMailboxType:(long long)a0 gmailLabels:(id)a1;
+ (BOOL)shouldPromptForBlockedSender;

- (BOOL)isEmailAddressBlocked:(id)a0;
- (void)_blockContact:(id)a0 block:(BOOL)a1;
- (void)unblockEmailAddress:(id)a0;
- (void)dealloc;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (void)blockEmailAddress:(id)a0;
- (BOOL)_isEmailAddressBlocked:(id)a0;
- (void)_blockedSenderListDidChange:(id)a0;
- (void)unblockContact:(id)a0;
- (void)blockEmailAddresses:(id)a0;
- (id)init;
- (BOOL)isTokenAddressIsBlocked:(id)a0;
- (void)blockTokenAddress:(id)a0;
- (BOOL)isContactBlocked:(id)a0;
- (void)_removeObserversIfNeeded;
- (void)unblockTokenAddress:(id)a0;
- (void)unblockEmailAddresses:(id)a0;
- (void)test_tearDown;
- (void)_locked_repopulateBlockedSenderCachedState:(id)a0;
- (BOOL)areAnyEmailAddressesBlocked:(id)a0;
- (void)blockContact:(id)a0;
- (void)_blockPhoneNumber:(id)a0;
- (void).cxx_destruct;
- (void)_unblockPhoneNumber:(id)a0;

@end
