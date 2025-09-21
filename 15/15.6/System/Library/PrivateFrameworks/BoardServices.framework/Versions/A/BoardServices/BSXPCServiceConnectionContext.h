@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {
    NSString *_proem;
}

@property (readonly, copy, nonatomic) NSString *endpointDescription;
@property (readonly, nonatomic, getter=isServer) char server;
@property (readonly, nonatomic, getter=isClient) char client;
@property (readonly, nonatomic, getter=isRoot) char root;
@property (readonly, nonatomic, getter=isChild) char child;
@property (readonly, nonatomic, getter=isNonLaunching) char nonLaunching;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
