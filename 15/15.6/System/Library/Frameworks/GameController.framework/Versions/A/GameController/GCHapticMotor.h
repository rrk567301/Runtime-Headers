@class NSString, NSMutableArray;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *queuedTransients;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) unsigned long long features;
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIndex:(int)a0;
- (void)applyValuesFrom:(id)a0;
- (void)drainQueuedTransients;
- (void)enqueueHapticTransientEvent:(id)a0;
- (id)initWithIndex:(int)a0 name:(id)a1;
- (id)initWithIndex:(int)a0 name:(id)a1 features:(unsigned long long)a2;
- (id)initWithIndex:(int)a0 name:(id)a1 features:(unsigned long long)a2 frequency:(float)a3 amplitude:(float)a4;

@end
