@interface IMAVTelephonyManager : NSObject

@property (class, readonly, nonatomic) IMAVTelephonyManager *sharedInstance;

- (void)dealloc;
- (void)_chatStateChanged:(id)a0;
- (id)init;

@end
