@class NSString;

@interface SLSBridgedManagedDisplaySetIsAnimatingOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) BOOL isAnimating;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentifier:(id)a0 isAnimating:(BOOL)a1;
- (void)invokeFallback;

@end
