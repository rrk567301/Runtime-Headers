@class NSString;

@interface SLSBridgedManagedDisplayCurrentSpaceAllowsWindowOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentifier:(id)a0 windowID:(unsigned int)a1;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(BOOL)a0;

@end
