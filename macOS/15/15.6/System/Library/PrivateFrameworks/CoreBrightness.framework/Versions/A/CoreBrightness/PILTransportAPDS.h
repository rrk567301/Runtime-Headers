@class NSString;

@interface PILTransportAPDS : NSObject <PILTransportProtocol> {
    BOOL _running;
    void *_apdsConnection;
}

@property (readonly) unsigned int dutyCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (BOOL)getDutyCycleMin:(unsigned int *)a0 andMax:(unsigned int *)a1;
- (BOOL)setDutyCycle:(float)a0;

@end
