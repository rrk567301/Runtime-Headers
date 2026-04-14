@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *responses;
@property (retain, nonatomic) NSMutableSet *successfulICS;
@property (retain, nonatomic) NSMutableSet *failedResponseItems;

- (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (void)addNewTopLevelItem:(id)a0;

@end
