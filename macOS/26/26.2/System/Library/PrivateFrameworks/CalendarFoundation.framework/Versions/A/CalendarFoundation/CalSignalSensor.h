@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void)startSensor;
- (id)initWithSignal:(int)a0;
- (void).cxx_destruct;
- (void)_shutDownSource;
- (id)description;
- (void)stopSensor;
- (void)dealloc;

@end
