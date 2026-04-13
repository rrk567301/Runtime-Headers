@class NSString, CalDAVOccurrenceChange, NSMutableDictionary, NSDate;

@interface CalDAVScheduleChangesProperty : NSObject {
    NSMutableDictionary *_occurrenceChanges;
}

@property (retain) NSDate *dateStamp;
@property int actionType;
@property (retain) NSString *attendeeAddress;
@property (retain) CalDAVOccurrenceChange *masterChange;

+ (void)initialize;
+ (id)debugStringForType:(int)a0;
+ (id)propertyWithItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUpdate;
- (BOOL)isReply;
- (id)recurrenceIDs;
- (id)changeForOccurrence:(id)a0;
- (BOOL)isCreate;
- (id)allChanges;
- (void)addOccurrenceChange:(id)a0;
- (BOOL)isCancel;

@end
