@interface MPSNDArrayRandomStateDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int algorithm;
@property (readonly, nonatomic) unsigned int *state;
@property (readonly, nonatomic) unsigned long long stateLength;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (id)exportStateToNDArray:(id)a0;
- (id)initPhiloxStateDescriptorWithCounterLow:(unsigned long long)a0 counterHigh:(unsigned long long)a1 key:(unsigned long long)a2;
- (id)initPhiloxStateDescriptorWithSeed:(unsigned long long)a0;

@end
