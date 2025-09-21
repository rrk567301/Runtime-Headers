@interface WFSiriLocationAuthorizationRequest : WFSiriActionRequest

@property (readonly, nonatomic) char needsPreciseLocation;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNeedsPreciseLocation:(char)a0;

@end
