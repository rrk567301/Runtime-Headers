@class CBRTPLCRecoveryCurveParams, NSObject;
@protocol OS_os_log;

@interface CBRTPLCParams : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) CBRTPLCRecoveryCurveParams *recoveryCurve;

- (void)dealloc;
- (id)initWithParser:(id)a0;
- (BOOL)loadParametersFromParser:(id)a0;

@end
