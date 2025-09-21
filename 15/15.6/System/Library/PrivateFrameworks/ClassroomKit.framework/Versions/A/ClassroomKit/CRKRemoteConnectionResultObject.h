@interface CRKRemoteConnectionResultObject : CATTaskResultObject

@property (nonatomic) long long response;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
