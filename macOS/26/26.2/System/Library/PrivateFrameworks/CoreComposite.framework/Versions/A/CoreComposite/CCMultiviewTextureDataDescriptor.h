@interface CCMultiviewTextureDataDescriptor : CCTextureDataDescriptor

@property (nonatomic) long long viewCount;
@property (nonatomic) long long layout;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
