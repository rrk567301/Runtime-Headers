@interface RTGeoRoadDataEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;

+ (BOOL)supportsSecureCoding;

- (id /* block */)processingBlock;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
