@interface RTGeoRoadDataEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id /* block */)processingBlock;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
