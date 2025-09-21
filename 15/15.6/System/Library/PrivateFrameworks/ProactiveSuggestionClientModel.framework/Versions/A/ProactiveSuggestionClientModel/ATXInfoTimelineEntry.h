@class ATXInfoTimelineEntryRelevance, NSDate;

@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) ATXInfoTimelineEntryRelevance *relevance;
@property (readonly, nonatomic) char isImportantRelativeToTimeline;

+ (id)entryWithDate:(id)a0 relevance:(id)a1;
+ (id)entryWithDate:(id)a0 importantRelativeToTimeline:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithDate:(id)a0 importantRelativeToTimeline:(char)a1;
- (id)initWithDate:(id)a0 relevance:(id)a1;

@end
