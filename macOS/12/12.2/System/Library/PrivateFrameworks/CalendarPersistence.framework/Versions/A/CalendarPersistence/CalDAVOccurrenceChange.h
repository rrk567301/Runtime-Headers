@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject {
    NSMutableDictionary *_changes;
}

@property BOOL isMaster;
@property (retain) ICSDate *recurrenceID;
@property (readonly) BOOL dateTimeChanged;
@property (readonly) BOOL startTimeChanged;
@property (readonly) BOOL endTimeChanged;
@property (readonly) BOOL timeZoneChanged;
@property (readonly) BOOL locationChanged;
@property (readonly) BOOL summaryChanged;
@property (readonly) BOOL urlChanged;
@property (readonly) BOOL descriptionChanged;
@property (readonly) BOOL statusChanged;
@property (readonly) BOOL attendeesChanged;
@property (readonly) BOOL attachmentsChanged;
@property (readonly) BOOL recurrenceChanged;
@property (readonly) BOOL participationChanged;
@property (readonly) BOOL privateCommentChanged;
@property (readonly) BOOL allDayChanged;
@property (readonly) BOOL alternateTimeProposalChanged;

+ (id)changeWithOccurrenceID:(id)a0;
+ (id)changeWithItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addChangedProperty:(id)a0;
- (id)changeTypeOnProperty:(id)a0;
- (id)initWithOccurrenceID:(id)a0;
- (void)addChanged:(id)a0 named:(id)a1 ofProperty:(id)a2;
- (BOOL)didPropertyChange:(id)a0;
- (BOOL)didParameterChange:(id)a0 onProperty:(id)a1;
- (id)allChanges;

@end
