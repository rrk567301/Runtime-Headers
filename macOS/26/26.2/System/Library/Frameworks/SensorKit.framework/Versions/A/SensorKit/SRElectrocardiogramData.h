@class NSMeasurement;

@interface SRElectrocardiogramData : NSObject <NSCopying, NSSecureCoding> {
    double _val;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSMeasurement *value;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithFlags:(unsigned long long)a0 value:(double)a1;
- (BOOL)isEqualToECGData:(id)a0;

@end
