@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char value;
@property (nonatomic) long long valueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)add:(id)a0;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;

@end
