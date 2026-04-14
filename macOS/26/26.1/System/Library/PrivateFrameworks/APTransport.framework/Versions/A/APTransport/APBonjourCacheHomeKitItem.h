@class NSDictionary;

@interface APBonjourCacheHomeKitItem : NSObject

@property (retain, nonatomic) NSDictionary *deviceInfo;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)itemWithDeviceInfo:(id)a0 userInfo:(id)a1;

- (void)dealloc;

@end
