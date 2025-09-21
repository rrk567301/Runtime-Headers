@class NSString;

@interface TraceRecorder : NSObject <ApparentTimeHandlerDelegate, ConfigurableObjectProtocol> {
    NSString *_traceFileRootName;
    int _traceFD;
    char _traceFileActive;
}

@property (retain, nonatomic) NSString *traceFileRootName;
@property (nonatomic) unsigned long long traceTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void).cxx_destruct;
- (void)startRecording;
- (void)stopRecording;
- (id)_jsonForNumber:(long long)a0;
- (id)_jsonForObject:(id)a0;
- (void)assessStartStop;
- (id)_jsonForAWDReport:(id)a0;
- (id)_jsonForName:(id)a0 objectString:(id)a1;
- (id)_parseFormat:(char *)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (int)configureInstance:(id)a0;
- (void)setTimerCallbackWithDelay:(double)a0 queue:(id)a1 reference:(id)a2;
- (void)vTraceTarget:(int)a0 signature:(const char *)a1 callout:(const char *)a2 item:(const char *)a3 fmt:(char *)a4 params:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;

@end
