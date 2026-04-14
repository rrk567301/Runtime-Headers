@class NSNumber, NSData;

@interface MTRDoorLockClusterUnlockWithTimeoutParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSData *pinCode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
