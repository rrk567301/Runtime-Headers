@class NSArray, NSData;

@interface DYGPUDerivedEncoderCounterInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *derivedCounterNames;
@property (retain, nonatomic) NSData *derivedCounters;
@property (retain, nonatomic) NSData *encoderInfos;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)_enumerateEncoderDerivedData:(id /* block */)a0;
- (void)_enumerateEncoderDerivedDataAtIndex:(unsigned int)a0 withBlock:(id /* block */)a1;

@end
