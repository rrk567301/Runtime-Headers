@class NSArray, NSString, NSObject, IMTimingCollection;
@protocol OS_dispatch_group;

@interface _IMDAggregateMessageIndexingJob : NSObject <IMDMessageIndexingJob>

@property (readonly, nonatomic) IMTimingCollection *timing;
@property (readonly, nonatomic) NSArray *indexingJobs;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_classNamesOfObjects:(id)a0;

@end
