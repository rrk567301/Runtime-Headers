@interface CCFrameUIDData : CCData

@property (nonatomic) long long frameUID;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
