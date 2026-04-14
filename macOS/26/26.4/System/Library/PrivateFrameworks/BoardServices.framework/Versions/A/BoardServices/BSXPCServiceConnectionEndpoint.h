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
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
