@class NSArray, NSMutableDictionary, NSString, CalDAVOccurrenceChange;

@interface CalDAVScheduleChangesProperty : NSObject

@property (retain, nonatomic) NSMutableDictionary *occurrenceChanges;
@property (readonly, nonatomic) char isCancel;
@property (readonly, nonatomic) char isReply;
@property (readonly, nonatomic) char isUpdate;
@property (readonly, nonatomic) char isCreate;
@property (readonly, nonatomic) NSArray *recurrenceIDs;
@property (retain, nonatomic) NSString *dateStamp;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *attendeeAddress;
@property (retain, nonatomic) CalDAVOccurrenceChange *masterChange;

+ (id)debugStringForType:(int)a0;
+ (id)propertyWithItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addOccurrenceChange:(id)a0;
- (id)changeForOccurrence:(id)a0;

@end
