@class NSNumber;

@interface MTRFaultInjectionClusterFailAtFaultParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *id;
@property (copy, nonatomic) NSNumber *numCallsToSkip;
@property (copy, nonatomic) NSNumber *numCallsToFail;
@property (copy, nonatomic) NSNumber *takeMutex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
