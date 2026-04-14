@class NSString, NSNumber;

@interface MTRAccountLoginClusterLoginParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *tempAccountIdentifier;
@property (copy, nonatomic) NSString *setupPIN;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
