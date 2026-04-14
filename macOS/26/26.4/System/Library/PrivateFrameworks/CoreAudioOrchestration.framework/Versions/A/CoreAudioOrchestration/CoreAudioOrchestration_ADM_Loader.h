@class NSObject;
@protocol OS_os_log;

@interface CoreAudioOrchestration_ADM_Loader : NSObject {
    NSObject<OS_os_log> *logger;
}

@property (nonatomic) void *admLibrary;

- (void).cxx_destruct;
- (void)dealloc;
- (id)createFactory;
- (id)initWithLogger:(id)a0;

@end
