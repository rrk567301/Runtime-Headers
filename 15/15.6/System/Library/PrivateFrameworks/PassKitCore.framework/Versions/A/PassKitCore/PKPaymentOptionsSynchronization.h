@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) char shouldSyncToCloud;
@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate;

+ (char)shouldSyncToCloud;

- (id)init;
- (void).cxx_destruct;
- (void)_localeDidChangeNotification:(id)a0;
- (void)_updateSynchronizationBehavior;

@end
