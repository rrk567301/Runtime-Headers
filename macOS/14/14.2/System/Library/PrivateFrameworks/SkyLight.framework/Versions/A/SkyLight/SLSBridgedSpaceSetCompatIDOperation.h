@interface SLSBridgedSpaceSetCompatIDOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) unsigned int compat_id;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 compat_id:(unsigned int)a1;
- (void)invokeFallback;

@end
