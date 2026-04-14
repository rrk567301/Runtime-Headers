@class NSArray, NSString;
@protocol SHServiceDelegate;

@interface SHService : NSObject <SHService>

@property (weak) id<SHServiceDelegate> serviceDelegate;
@property (readonly) NSArray *workers;
@property (readonly) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machServiceName;
+ (void)initializeGlobalServiceState;

- (void)stop;
- (BOOL)shouldStartWorker:(id)a0;

@end
