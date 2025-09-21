@class NSSet, EFLocked, NSString;
@protocol EFScheduler;

@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader, EMBlockedSenderWriter> {
    struct atomic_flag { _Atomic BOOL _Value; } _didRemoveObservers;
}

@property (retain, nonatomic) EFLocked *blockedSenderCache;
@property (retain, nonatomic) id<EFScheduler> notificationScheduler;
@property (nonatomic, getter=isMoveToTrashEnabled) char moveToTrashEnabled;
@property (nonatomic, getter=isBlockedSenderEnabled) char blockedSenderEnabled;
@property (readonly, copy, nonatomic) NSSet *blockedSenderEmailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPromptForBlockedSender:(char)a0;
+ (char)shouldMoveToTrashForMailboxType:(long long)a0;
+ (char)shouldPromptForBlockedSender;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)areAnyEmailAddressesBlocked:(id)a0;
- (void)blockEmailAddress:(id)a0;
- (void)blockEmailAddresses:(id)a0;
- (char)isEmailAddressBlocked:(id)a0;
- (void)test_tearDown;
- (void)unblockEmailAddress:(id)a0;
- (void)unblockEmailAddresses:(id)a0;
- (void)unblockContact:(id)a0;
- (void)_blockContact:(id)a0 block:(char)a1;
- (void)_blockPhoneNumber:(id)a0;
- (void)_blockedSenderListDidChange:(id)a0;
- (char)_isEmailAddressBlocked:(id)a0;
- (void)_locked_repopulateBlockedSenderCachedState:(id)a0;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (void)_removeObserversIfNeeded;
- (void)_unblockPhoneNumber:(id)a0;
- (void)blockContact:(id)a0;
- (void)blockTokenAddress:(id)a0;
- (char)isContactBlocked:(id)a0;
- (char)isTokenAddressIsBlocked:(id)a0;
- (void)unblockTokenAddress:(id)a0;

@end
