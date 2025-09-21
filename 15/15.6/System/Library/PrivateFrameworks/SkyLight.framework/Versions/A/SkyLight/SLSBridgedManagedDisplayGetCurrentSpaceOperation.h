@class NSString;

@interface SLSBridgedManagedDisplayGetCurrentSpaceOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end
