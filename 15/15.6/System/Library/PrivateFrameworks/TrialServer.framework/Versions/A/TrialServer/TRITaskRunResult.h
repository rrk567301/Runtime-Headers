@class NSArray, NSDate;

@interface TRITaskRunResult : NSObject <NSCopying>

@property (readonly, nonatomic) int runStatus;
@property (readonly, nonatomic) char reportResultToServer;
@property (readonly, nonatomic) NSArray *nextTasks;
@property (readonly, nonatomic) NSDate *earliestRetryDate;

+ (id)resultWithRunStatus:(int)a0 reportResultToServer:(char)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToResult:(id)a0;
- (id)copyWithReplacementEarliestRetryDate:(id)a0;
- (id)copyWithReplacementNextTasks:(id)a0;
- (id)copyWithReplacementReportResultToServer:(char)a0;
- (id)copyWithReplacementRunStatus:(int)a0;
- (id)initWithRunStatus:(int)a0 reportResultToServer:(char)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;

@end
