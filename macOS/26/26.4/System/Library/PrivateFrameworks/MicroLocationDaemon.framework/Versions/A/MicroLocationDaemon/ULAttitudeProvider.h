@class NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ULAttitudeSource;

@interface ULAttitudeProvider : NSObject <MicroLocationDaemon.ULAttitudeProviding> {
    id<ULAttitudeSource> _attitudeSource;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct ULAttitudeProviderDelegate { void /* function */ **x0; } *delegate;
@property (retain, nonatomic) NSDate *previousStatusUpdateDate;
@property (nonatomic) double updateInterval;
@property (retain, nonatomic) NSMutableArray *attitudeBuffer;
@property (nonatomic) unsigned long long maxBufferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdates;
- (void).cxx_destruct;
- (void)startUpdates;
- (void /* unknown type, empty encoding */)attitudeAtTime:(id)a0;
- (void /* unknown type, empty encoding */)attitudeAtGTBTimestamp:(unsigned long long)a0;
- (void)didReceiveAttitudeUpdate:(id)a0 withError:(id)a1;
- (id)initWithQueue:(id)a0 delegate:(struct ULAttitudeProviderDelegate { void /* function */ **x0; } *)a1 bridgeType:(unsigned long long)a2;

@end
