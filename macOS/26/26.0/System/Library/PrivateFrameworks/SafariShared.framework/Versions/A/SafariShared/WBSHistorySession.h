@class NSDate;

@interface WBSHistorySession : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL isCurrentSession;

+ (id)currentSession;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionStartDate:(id)a0;

@end
