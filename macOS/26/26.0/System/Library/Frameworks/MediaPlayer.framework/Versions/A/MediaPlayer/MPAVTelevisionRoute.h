@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (void)dealloc;
- (id)routeUID;
- (id)connection;
- (void).cxx_destruct;
- (long long)routeType;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;

@end
