@class NSArray, NSObject;
@protocol OS_os_log;

@interface CBEDRModulator : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (nonatomic) char enabled;
@property (retain) NSArray *nitsDataPointsConfig;
@property (retain) NSArray *headroomDataPointsConfig;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)isConfigured;
- (char)modulatedHeadroom:(float *)a0 forHeadroom:(float)a1 forSDRNits:(float)a2;

@end
