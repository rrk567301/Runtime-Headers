@interface CKDDeviceCapabilityCheckResult : NSObject

@property (nonatomic) BOOL isSupported;

- (id)initWithIsSupported:(BOOL)a0;
- (id)makeClientResult;

@end
