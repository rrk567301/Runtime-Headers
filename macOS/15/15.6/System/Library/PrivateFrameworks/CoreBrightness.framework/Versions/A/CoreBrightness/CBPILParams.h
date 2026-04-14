@class NSString, CBFloatArray, NSObject;
@protocol OS_os_log;

@interface CBPILParams : NSObject <CBPILParamsProtocol> {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) CBFloatArray *curveLux;
@property (readonly) CBFloatArray *curveNits;
@property (readonly) unsigned int minHWDutyCycle;
@property (readonly) unsigned int maxHWDutyCycle;
@property (readonly) unsigned int knownNits;
@property (readonly) float knownDutyCycle;
@property (readonly) unsigned long long transport;
@property (readonly) unsigned long long stateSource;
@property (readonly) unsigned long long controlType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0 andControlType:(unsigned long long)a1;
- (id)initWithCurveLux:(id)a0 curveNits:(id)a1 minHWDutyCycle:(unsigned int)a2 maxHWDutyCycle:(unsigned int)a3 knownNits:(unsigned int)a4 knownDutyCycle:(float)a5 transport:(unsigned long long)a6 stateSource:(unsigned long long)a7 controlType:(unsigned long long)a8;

@end
