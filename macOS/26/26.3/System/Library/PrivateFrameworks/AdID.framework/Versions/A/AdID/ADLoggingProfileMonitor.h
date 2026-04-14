@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (void)_fetchInstalledProfilesAndListen;
- (id)init;
- (void)_beginMonitoring;
- (id)fetchInstalledProfileIdentifiers;
- (void).cxx_destruct;
- (void)_profilesChanged:(id)a0;
- (BOOL)_hasRelevantProfileChanged:(id)a0;

@end
