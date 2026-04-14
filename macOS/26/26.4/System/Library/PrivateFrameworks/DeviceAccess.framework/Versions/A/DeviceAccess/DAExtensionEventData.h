@class NSData, NSString;

@interface DAExtensionEventData : DAEventExtension

@property (copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *accessoryService;
@property (nonatomic) long long destination;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 data:(id)a1;
- (id)initWithDevice:(id)a0 data:(id)a1 service:(id)a2;
- (id)initWithDevice:(id)a0 data:(id)a1 sessionID:(id)a2;

@end
