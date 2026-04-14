@class NSString;

@interface CBDisplayContainerDFR : CBContainer <CBContainerProtocol, CBHIDServiceProtocol> {
    struct __IOHIDServiceClient { } *_dfrService;
    BOOL _isRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)start;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)stop;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithDFRService:(struct __IOHIDServiceClient { } *)a0;

@end
