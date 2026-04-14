@interface IMAVTelephonyManager : NSObject

@property (class, readonly, nonatomic) IMAVTelephonyManager *sharedInstance;

- (void)_chatStateChanged:(id)a0;
- (id)init;
- (void)dealloc;

@end
