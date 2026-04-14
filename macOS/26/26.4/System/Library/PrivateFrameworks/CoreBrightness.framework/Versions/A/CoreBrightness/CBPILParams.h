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

@end
