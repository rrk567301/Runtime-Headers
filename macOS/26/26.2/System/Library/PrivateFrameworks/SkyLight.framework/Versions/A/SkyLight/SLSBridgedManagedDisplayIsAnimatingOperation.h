@class NSString;

@interface SLSBridgedManagedDisplayIsAnimatingOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentifier:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(BOOL)a0;

@end
