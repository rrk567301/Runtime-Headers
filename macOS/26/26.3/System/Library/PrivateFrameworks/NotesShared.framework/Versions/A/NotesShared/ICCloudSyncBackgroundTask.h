@class NSString, ICCloudContext;

@interface ICCloudSyncBackgroundTask : NSObject <ICBackgroundTask>

@property (class, readonly, nonatomic) BOOL requiresPower;
@property (class, readonly, nonatomic) NSString *syncReason;
@property (class, readonly, nonatomic) NSString *taskIdentifier;

@property (readonly, nonatomic) ICCloudContext *cloudContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeActivityScheduler;

@end
