@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    int _targetPID;
    unsigned int _invalidationGeneration;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
