@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RBSMachEndpoint : NSObject <RBSXPCSecureCoding> {
    NSObject<OS_xpc_object> *_port;
    NSObject<OS_xpc_object> *_getterCache_endpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _lock_hasCheckedEndpoint;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNonLaunching) char nonLaunching;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsRBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)_copy;
- (id)_initWithName:(id)a0 nonLaunching:(char)a1 port:(id)a2;
- (char)_isCachedPortValid;
- (char)_isEquivalentToEndpoint:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
