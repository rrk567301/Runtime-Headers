@class NSString;

@interface BKSHIDEventHitTestClientContext : NSObject <BSProtobufSerializable, BSXPCSecureCoding>

@property (nonatomic) int pid;
@property (nonatomic) unsigned int contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
