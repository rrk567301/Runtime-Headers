@interface CCMultiviewTextureDataDescriptor : CCTextureDataDescriptor

@property (nonatomic) long long viewCount;
@property (nonatomic) long long layout;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
