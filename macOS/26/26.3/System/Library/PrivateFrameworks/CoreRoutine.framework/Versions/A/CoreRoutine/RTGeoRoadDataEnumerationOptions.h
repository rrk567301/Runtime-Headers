@interface RTGeoRoadDataEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
