@class ATXHomeScreenEvent, NSString, ATXSuggestionLayout, NSMutableArray, NSDate;

@interface ATXStackRotationSession : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ATXHomeScreenEvent *startingStackChangeEvent;
@property (readonly, nonatomic) ATXHomeScreenEvent *endingStackChangeEvent;
@property (nonatomic) unsigned long long engagementStatus;
@property (readonly, nonatomic) NSMutableArray *engagementStatusHistory;
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (retain, nonatomic) NSDate *dwellStartDate;
@property (nonatomic) double longestDwell;
@property (nonatomic) char isNPlusOneRotation;
@property (nonatomic) char isFirstNPlusOneRotation;
@property (nonatomic) char completed;
@property (readonly, nonatomic) NSString *rotationReason;
@property (readonly, nonatomic) NSString *widgetUniqueId;
@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) NSString *blendingCacheId;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) int stackLocation;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)markRejectedRotationDismissOnce;
- (void)markStackTapped;
- (void)finalizeWithEndingStackChangeEvent:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0 endingStackChangeEvent:(id)a1 engagementStatus:(unsigned long long)a2 engagementStatusHistory:(id)a3 systemSuggestSuggestionLayout:(id)a4 dwellStartDate:(id)a5 longestDwell:(double)a6 isNPlusOneRotation:(char)a7 isFirstNPlusOneRotation:(char)a8 completed:(char)a9;
- (char)isEqualToATXStackRotationSession:(id)a0;
- (void)markAddedToStack;
- (void)markRejectedRotationNeverShowAgain;
- (void)markStackHiddenAtDate:(id)a0;
- (void)markStackShownAtDate:(id)a0;
- (void)tryUpdateStackRotationEngagementStatus:(unsigned long long)a0;
- (void)updateIsNPlusOneRotation:(char)a0 isFirstNPlusOneRotation:(char)a1;
- (void)updateWithSystemSuggestSuggestionLayout:(id)a0;

@end
