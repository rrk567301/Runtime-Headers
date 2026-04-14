@class HMFTimer, HMMTRSoftwareUpdateProviderQueryImageRequestParams, HMMTRAccessoryServer, NSObject, NSString, HMMTRSoftwareUpdateProvider, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRQueryImageResponseBusyTimer : HMFObject <HMFTimerDelegate>

@property (retain) HMFTimer *updateTimer;
@property (retain) HMMTRSoftwareUpdateProviderQueryImageRequestParams *requestParams;
@property (weak) HMMTRSoftwareUpdateProvider *softwareUpdateProvider;
@property (weak) HMMTRAccessoryServer *server;
@property (retain, nonatomic) NSNumber *endpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)stop;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)start;
- (id)initWithServer:(id)a0 softwareUpdateProvider:(id)a1 timeInterval:(double)a2 endpoint:(id)a3 requestParams:(id)a4 queue:(id)a5;

@end
