@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject

@property (retain, nonatomic) NSMutableDictionary *changes;
@property (nonatomic) char isMaster;
@property (retain, nonatomic) ICSDate *recurrenceID;
@property (readonly, nonatomic) char dateTimeChanged;
@property (readonly, nonatomic) char startTimeChanged;
@property (readonly, nonatomic) char endTimeChanged;
@property (readonly, nonatomic) char timeZoneChanged;
@property (readonly, nonatomic) char locationChanged;
@property (readonly, nonatomic) char summaryChanged;
@property (readonly, nonatomic) char urlChanged;
@property (readonly, nonatomic) char descriptionChanged;
@property (readonly, nonatomic) char statusChanged;
@property (readonly, nonatomic) char attendeesChanged;
@property (readonly, nonatomic) char attachmentsChanged;
@property (readonly, nonatomic) char recurrenceChanged;
@property (readonly, nonatomic) char participationChanged;
@property (readonly, nonatomic) char privateCommentChanged;
@property (readonly, nonatomic) char proposedStartDateChanged;

+ (id)changeWithItem:(id)a0;
+ (id)changeWithOccurrenceID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addChangedParameter:(id)a0 ofProperty:(id)a1;
- (void)addChangedProperty:(id)a0;
- (char)didParameterChange:(id)a0 onProperty:(id)a1;
- (char)didPropertyChange:(id)a0;
- (id)initWithOccurrenceID:(id)a0;

@end
