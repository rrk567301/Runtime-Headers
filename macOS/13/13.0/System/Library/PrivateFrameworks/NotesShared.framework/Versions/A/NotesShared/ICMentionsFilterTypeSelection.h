@class NSString;

@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (readonly, nonatomic) NSString *currentUserID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)filterType;
- (id)filterName;
- (id)emptySummaryTitle;
- (id)emptySummary;
- (id)shortEmptySummary;
- (id)summaryWithJoinOperatorMenu;

@end
