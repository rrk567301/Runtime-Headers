@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (void).cxx_destruct;
- (id)routeUID;
- (id)connection;
- (void)dealloc;
- (long long)routeType;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;

@end
