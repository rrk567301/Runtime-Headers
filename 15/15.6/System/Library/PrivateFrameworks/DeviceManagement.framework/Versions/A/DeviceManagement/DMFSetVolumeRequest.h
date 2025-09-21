@interface DMFSetVolumeRequest : DMFTaskRequest

@property (nonatomic) float volume;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
