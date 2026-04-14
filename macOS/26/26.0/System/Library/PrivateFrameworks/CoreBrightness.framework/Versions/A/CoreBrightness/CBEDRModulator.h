@class NSArray, NSObject;
@protocol OS_os_log;

@interface CBEDRModulator : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (nonatomic) BOOL enabled;
@property (retain) NSArray *nitsDataPointsConfig;
@property (retain) NSArray *headroomDataPointsConfig;

- (BOOL)isConfigured;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)modulatedHeadroom:(float *)a0 forHeadroom:(float)a1 forSDRNits:(float)a2;

@end
