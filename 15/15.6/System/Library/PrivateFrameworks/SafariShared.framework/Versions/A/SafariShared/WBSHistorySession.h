@class NSDate;

@interface WBSHistorySession : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) char isCurrentSession;

+ (id)currentSession;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionStartDate:(id)a0;

@end
