@class NSString;

@interface SLSBridgedManagedDisplayGetCurrentSpaceOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayIdentifier:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end
