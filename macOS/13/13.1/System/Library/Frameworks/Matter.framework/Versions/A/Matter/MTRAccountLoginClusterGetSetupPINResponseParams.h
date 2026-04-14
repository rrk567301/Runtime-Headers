@class NSString, NSNumber;

@interface MTRAccountLoginClusterGetSetupPINResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *setupPIN;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
