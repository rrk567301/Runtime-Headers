@class NSDate, ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata, NSMutableArray, ATXSuggestionLayout;

@interface ATXProactiveSuggestionWidgetRotationFeedbackSession : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long engagementType;
@property (readonly, nonatomic) ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata *metadata;
@property (readonly, nonatomic) NSMutableArray *engagementHistory;
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSDate *dwellStartDate;
@property (readonly, nonatomic) double longestDwell;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (char)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)markStackTapped;
- (void)markStackHiddenAtDate:(id)a0;
- (void)markStackShownAtDate:(id)a0;
- (void)updateWithSystemSuggestSuggestionLayout:(id)a0;
- (id)initWithEngagementType:(long long)a0 metadata:(id)a1 engagementHistory:(id)a2 systemSuggestSuggestionLayout:(id)a3 sessionStartDate:(id)a4 sessionEndDate:(id)a5 dwellStartDate:(id)a6 longestDwell:(double)a7;
- (char)isEqualToATXProactiveSuggestionWidgetRotationFeedbackSession:(id)a0;
- (void)markRotationSessionEndedAtDate:(id)a0 wasUserScroll:(char)a1;
- (void)markRotationSessionStartedAtDate:(id)a0;
- (void)tryUpdateStackRotationEngagementType:(long long)a0;
- (void)updateSessionMetadata:(id)a0;

@end
