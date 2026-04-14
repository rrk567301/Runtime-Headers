@interface CRKRemoteConnectionResultObject : CATTaskResultObject

@property (nonatomic) long long response;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
