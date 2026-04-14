@class DAExtensionCapability;

@interface DAExtensionEventLifecycle : DAEventExtension

@property (retain, nonatomic) DAExtensionCapability *extensionCapability;
@property (nonatomic) unsigned long long previousState;
@property (nonatomic) unsigned long long processState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 eventType:(long long)a1 extensionType:(long long)a2;

@end
