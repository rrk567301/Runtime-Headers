@class NSString, BSXPCServiceConnectionEndpoint;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {
    BSXPCServiceConnectionEndpoint *_underlyingEndpoint;
}

@property (class, readonly, copy, nonatomic) NSString *defaultShellMachName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching;
@property (readonly, copy, nonatomic) NSString *targetDescription;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endpointOfLaunchIdentifier:(id)a0 fromLaunchResponse:(id)a1 withService:(id)a2 instance:(id)a3 error:(out id *)a4;
+ (id)nullEndpointForService:(id)a0 instance:(id)a1;
+ (id)endpointForServiceName:(id)a0 oneshot:(id)a1 service:(id)a2 instance:(id)a3;
+ (id)endpointForSystemMachName:(id)a0 service:(id)a1 instance:(id)a2;
+ (id)endpointForMachName:(id)a0 targetUserIdentifier:(unsigned int)a1 service:(id)a2 instance:(id)a3;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)endpointForMachName:(id)a0 service:(id)a1 instance:(id)a2;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqualToServiceEndpoint:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isNullEndpoint;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void)saveAsInjectorEndowmentForKey:(id)a0;
- (id)RBSTarget;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
