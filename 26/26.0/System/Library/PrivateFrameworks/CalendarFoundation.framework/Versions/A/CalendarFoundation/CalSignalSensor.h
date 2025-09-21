@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void)dealloc;
- (void)stopSensor;
- (id)initWithSignal:(int)a0;
- (void)startSensor;
- (id)description;
- (void)_shutDownSource;
- (void).cxx_destruct;

@end
