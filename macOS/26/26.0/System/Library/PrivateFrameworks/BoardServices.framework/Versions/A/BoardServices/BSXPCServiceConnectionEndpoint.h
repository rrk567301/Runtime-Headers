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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
