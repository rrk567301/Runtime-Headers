@class NSString;

@interface HMHomeActivityStateScheduleUtilities : NSObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)areValidScheduleEntries:(id)a0;
+ (id)sortedScheduleEntries:(id)a0;


@end
