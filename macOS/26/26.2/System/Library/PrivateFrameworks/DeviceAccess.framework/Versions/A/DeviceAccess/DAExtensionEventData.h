@class NSData;

@interface DAExtensionEventData : DAEventExtension

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *key;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDevice:(id)a0 data:(id)a1 key:(id)a2;

@end
