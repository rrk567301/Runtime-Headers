@class NSString, NSDictionary, NSMutableArray, NSLock;

@interface CAReportingPerformanceObject : NSObject

@property (nonatomic) struct vector<pc_session *, std::allocator<pc_session *>> { struct pc_session **__begin_; struct pc_session **__end_; struct pc_session **__cap_; } sessions;
@property (retain, nonatomic) NSMutableArray *processIdentifiers;
@property (retain, nonatomic) NSString *hostApplicationDisplayID;
@property (retain, nonatomic) NSLock *sessionsLock;
@property (readonly, nonatomic) NSDictionary *performanceMetrics;
@property (nonatomic) unsigned short serviceType;
@property (retain, nonatomic) NSDictionary *configuration;

- (void)begin;
- (id)initWithProcessIdentifiers:(id)a0;
- (void)abandon;
- (id).cxx_construct;
- (id)endAndReturnPerformanceMetrics;
- (void).cxx_destruct;

@end
