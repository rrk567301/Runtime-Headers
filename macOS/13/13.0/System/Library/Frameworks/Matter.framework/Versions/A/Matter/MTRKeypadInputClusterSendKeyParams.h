@class NSNumber;

@interface MTRKeypadInputClusterSendKeyParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *keyCode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
