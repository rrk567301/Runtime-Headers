@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)routeUID;
- (long long)routeType;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;

@end
