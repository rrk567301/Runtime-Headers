@class IASAnalyticsServer, IASXPCServer;

@interface IASStandaloneServer : NSObject {
    IASXPCServer *_xpcServer;
    IASAnalyticsServer *_analyticsServer;
}

- (void).cxx_destruct;
- (id)init;
- (void)periodic24HourEvents;

@end
