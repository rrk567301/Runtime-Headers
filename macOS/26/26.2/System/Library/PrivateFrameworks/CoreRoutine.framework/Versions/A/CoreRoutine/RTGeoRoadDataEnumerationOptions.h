@interface RTGeoRoadDataEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (nonatomic) unsigned long long batchSize;

+ (BOOL)supportsSecureCoding;

- (id /* block */)processingBlock;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)enumeratedType;
- (id)init;
- (id)initWithbatchSize:(unsigned long long)a0;

@end
