@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CSProcess : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *processMonitor;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) int currentPID;
@property (nonatomic) BOOL exemptFromMitigations;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isRunning;
- (id)initWithIdentifier:(id)a0 andPID:(int)a1;
- (void)monitorForExit;
- (void)performCleanupOnExit;

@end
