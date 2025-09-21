@class NSString;

@interface ActivityUIServices.SizeDimensionRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMinimum:(double)a0 maximum:(double)a1;
- (id)initWithMinimum:(double)a0 maximum:(double)a1 type:(long long)a2;

@end
