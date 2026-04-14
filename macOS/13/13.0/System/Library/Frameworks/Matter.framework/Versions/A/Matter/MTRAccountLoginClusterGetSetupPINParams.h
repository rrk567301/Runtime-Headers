@class NSString, NSNumber;

@interface MTRAccountLoginClusterGetSetupPINParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tempAccountIdentifier;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
