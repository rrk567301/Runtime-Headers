@class NSString;

@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (readonly, nonatomic) NSString *currentUserID;

- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)filterName;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)shortEmptySummary;
- (id)summaryWithJoinOperatorMenu;

@end
