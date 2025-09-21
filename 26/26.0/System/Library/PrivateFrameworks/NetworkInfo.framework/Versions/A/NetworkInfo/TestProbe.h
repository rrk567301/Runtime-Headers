@class NSUUID, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TestProbe : NSObject

@property (nonatomic) NSUUID *uuid;
@property (nonatomic) NSString *diagSessionUUID;
@property (nonatomic) unsigned int status;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) NSObject<OS_dispatch_source> *periodicTimer;
@property (readonly, nonatomic) NSMutableArray *probeOutputFilePaths;

+ (void *)loadCoreUtils;
+ (id)testProbeStatusString:(unsigned int)a0;

- (id)initWithQueue:(id)a0;
- (BOOL)startPeriodicTimer;
- (void)stopTest;
- (void)stopPeriodicTimer;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cancelTest:(id /* block */)a0;
- (void)periodicTimerFired:(id)a0;
- (BOOL)startPeriodicTimerAt:(unsigned long long)a0 repeatInterval:(unsigned long long)a1;

@end
