@class NSObject;
@protocol OS_xpc_object;

@interface IOThreadXPCWorkgroupTransporter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *workgroup;

+ (id)transporter:(const void *)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct IOThreadWorkgroup { struct unique_ptr<caulk::mach::os_workgroup_managed, std::default_delete<caulk::mach::os_workgroup_managed>> { struct os_workgroup_managed *x0; } x0; })getWorkgroup;
- (id)initWithWorkgroup:(id)a0;

@end
