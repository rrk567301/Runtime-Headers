@class NSUUID, NSString, NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionEndpoint : NSObject <NSCopying> {
    BOOL _nonLaunching;
    int _targetPID;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSUUID *_oneshot;
    NSString *_targetDescription;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
