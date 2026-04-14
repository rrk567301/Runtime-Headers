@interface WFSiriLocationAuthorizationRequest : WFSiriActionRequest

@property (readonly, nonatomic) BOOL needsPreciseLocation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNeedsPreciseLocation:(BOOL)a0;

@end
