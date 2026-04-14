@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging>

@property (readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)scheduleTask:(id)a0;
+ (Class)taskRunnerClass;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)activityForScheduling;

@end
