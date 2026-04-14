@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (id)connection;
- (void)dealloc;
- (id)routeUID;
- (void).cxx_destruct;
- (long long)routeType;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;

@end
