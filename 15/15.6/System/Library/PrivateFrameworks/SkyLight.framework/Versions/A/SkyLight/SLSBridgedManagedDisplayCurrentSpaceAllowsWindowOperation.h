@class NSString;

@interface SLSBridgedManagedDisplayCurrentSpaceAllowsWindowOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) unsigned int windowID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0 windowID:(unsigned int)a1;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(char)a0;

@end
