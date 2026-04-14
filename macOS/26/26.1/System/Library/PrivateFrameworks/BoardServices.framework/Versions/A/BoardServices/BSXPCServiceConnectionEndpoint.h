@class NSUUID, NSString, NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionEndpoint : NSObject <NSCopying> {
    BOOL _nonLaunching;
    int _targetPID;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSUUID *_oneshot;
    NSString *_targetDescription;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
