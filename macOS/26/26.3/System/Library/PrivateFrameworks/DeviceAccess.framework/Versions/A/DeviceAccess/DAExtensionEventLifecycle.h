@interface DAExtensionEventLifecycle : DAEventExtension

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 eventType:(long long)a1 extensionType:(long long)a2;

@end
