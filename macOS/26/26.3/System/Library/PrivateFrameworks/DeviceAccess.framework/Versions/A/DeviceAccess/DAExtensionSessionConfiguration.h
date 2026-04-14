@class NSString, DADevice, NSObject;
@protocol OS_dispatch_queue;

@interface DAExtensionSessionConfiguration : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) DADevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithDevice:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
