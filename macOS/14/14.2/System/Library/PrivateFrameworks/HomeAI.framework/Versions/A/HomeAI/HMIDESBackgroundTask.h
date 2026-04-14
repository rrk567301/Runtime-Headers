@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>

@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;
+ (BOOL)scheduleTask:(id)a0;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)activityForScheduling;

@end
