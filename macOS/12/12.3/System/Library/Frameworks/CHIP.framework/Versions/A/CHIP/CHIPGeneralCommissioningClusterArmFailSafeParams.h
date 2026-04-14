@class NSNumber;

@interface CHIPGeneralCommissioningClusterArmFailSafeParams : NSObject

@property (retain, nonatomic) NSNumber *expiryLengthSeconds;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
