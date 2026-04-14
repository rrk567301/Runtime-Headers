@class NSString, NSArray, NSDictionary;

@interface CAReportingPerformanceObject : NSObject

@property (retain) NSString *perfDataPath;
@property (retain) NSString *perfDataName;
@property struct pc_session { } *session;
@property (retain) NSArray *processIdentifiers;
@property (readonly, nonatomic) NSDictionary *performanceMetrics;
@property (nonatomic) unsigned short serviceType;
@property (retain, nonatomic) NSDictionary *configuration;

- (void).cxx_destruct;
- (void)begin;
- (id)initWithProcessIdentifiers:(id)a0;
- (id)endAndReturnPerformanceMetrics;

@end
