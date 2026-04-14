@class NSDateInterval;

@interface RTFamiliarityIndexResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double familiarityIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateInterval:(id)a0 familiarityIndex:(double)a1;

@end
