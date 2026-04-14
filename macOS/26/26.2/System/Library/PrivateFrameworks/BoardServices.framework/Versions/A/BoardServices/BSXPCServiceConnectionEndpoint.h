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
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
