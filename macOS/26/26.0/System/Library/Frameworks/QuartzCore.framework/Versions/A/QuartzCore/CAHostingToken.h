@class NSObject;
@protocol OS_xpc_object;

@interface CAHostingToken : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_xPort;
    struct { unsigned int sid; int pid; unsigned int cid; unsigned int type; } _data;
    unsigned int _port;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isAuthoritative) BOOL authoritative;
@property (readonly) int pid;

+ (id)tokenFromXPCRepresentation:(id)a0 error:(id *)a1;
+ (id)tokenWithPort:(unsigned int)a0 data:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)createXPCRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithBlock:(id /* block */)a0;

@end
