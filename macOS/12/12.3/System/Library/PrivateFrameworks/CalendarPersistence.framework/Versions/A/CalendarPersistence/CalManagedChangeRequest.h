@class NSString, NSSet, NSData, CalManagedCalDAVError, NSDate, NSNumber;

@interface CalManagedChangeRequest : CalManagedObject <ETagObject>

@property long long sequenceNumber;
@property (retain) NSString *localUID;
@property (retain) NSString *sharedUID;
@property (retain) NSString *sourceUID;
@property (retain) NSString *eTag;
@property (retain) NSString *scheduleTag;
@property (retain) NSString *serverFilename;
@property (retain) NSData *icsData;
@property (retain) CalManagedCalDAVError *error;
@property (retain) NSDate *firstMaterialized;
@property (retain) NSNumber *materializedCount;
@property int type;
@property (retain) NSSet *dependents;
@property (retain) NSSet *dependencies;
@property (retain) NSString *sliceChildLocalUID;
@property (retain) NSDate *sliceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (void)setSequenceNumberForRequest:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertChangeRequestWithType:(int)a0 calendarItem:(id)a1 sourceUID:(id)a2 inManagedObjectContext:(id)a3;
+ (void)setSequenceNumbersForRequests:(id)a0 inManagedObjectContext:(id)a1;
+ (id)insertChangeRequestWithType:(int)a0 calendarItem:(id)a1 sourceUID:(id)a2 setSequenceNumber:(BOOL)a3 inManagedObjectContext:(id)a4;
+ (unsigned long long)_iCalendarWriteToServerOptionsForCalendar:(id)a0;
+ (unsigned long long)_iCalendarExportOptionsForCalendar:(id)a0;

- (void)awakeFromInsert;
- (void)clearETags;
- (void)checkDependenciesAndBreakCycles;
- (BOOL)_checkAndBreakCycles:(id)a0;
- (void)addDependentChangeRequest:(id)a0;

@end
