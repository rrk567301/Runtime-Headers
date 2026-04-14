@class NSString, NSObject;
@protocol OS_os_log;

@interface ActionTimer : NSObject

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;

- (double)elapsedTime;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
