@class NSData, NSString;

@interface DAExtensionEventData : DAEventExtension

@property (copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *accessoryService;
@property (nonatomic) long long destination;
@property (readonly, nonatomic) unsigned long long capabilityFlags;

+ (BOOL)supportsSecureCoding;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 data:(id)a1 capabilityFlag:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 data:(id)a1 service:(id)a2;

@end
