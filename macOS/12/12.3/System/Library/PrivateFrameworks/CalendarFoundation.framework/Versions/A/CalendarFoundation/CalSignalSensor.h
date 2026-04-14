@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_shutDownSource;
- (id)initWithSignal:(int)a0;
- (void)startSensor;
- (void)stopSensor;

@end
