@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double value;
@property (nonatomic) double maxValue;
@property (readonly, nonatomic) double normalized;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)add:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;

@end
