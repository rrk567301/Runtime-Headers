@interface CCSAWDMeshBufferDataDescriptor : CCDataDescriptor

@property (nonatomic) unsigned long long dataFormatVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
