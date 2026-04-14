@class EKBackingStore;

@interface EKRecurrenceChangeManager : NSObject

@property (readonly, weak, nonatomic) EKBackingStore *backingStore;

- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0;
- (id)doChangeAllOnSeries:(id)a0 forEvent:(id)a1 error:(id *)a2;
- (id)doThisAndFutureChangeOnSeries:(id)a0 forEvent:(id)a1 error:(id *)a2;
- (BOOL)doThisAndFutureDeleteOnEvent:(id)a0 withMaster:(id)a1 error:(id *)a2;
- (void)undoThisAndFutureDeleteOnEvent:(id)a0 originalMaster:(id)a1;
- (void)adjustDetachedEvents:(id)a0 andExceptions:(id)a1 onSeries:(id)a2 sliceOffset:(id)a3;
- (void)readdDetachedEvents:(id)a0 andExceptions:(id)a1 toSeries:(id)a2 afterDate:(id)a3;
- (void)copyDetachedEventsAndExceptionsFromSeries:(id)a0 toSeries:(id)a1;
- (void)moveDetachedEventsAndExceptionsFromSeries:(id)a0 toSeries:(id)a1;
- (void)_handleTimeShiftOnSeries:(id)a0 forEvent:(id)a1;
- (void)_updateRecurrenceRulesForStartDayChangesOnEvent:(id)a0;
- (void)_updateDetachedEventsAndExceptionsForSeries:(id)a0;
- (id)_seriesOffsetForEvent:(id)a0;
- (void)_applyAppropriateTimeShiftToSeries:(id)a0 offset:(id)a1 duration:(id)a2;
- (id)_createNewMasterFromOldMaster:(id)a0;
- (void)_adjustMaster:(id)a0 matchDetailsFromSliceEvent:(id)a1;
- (void)_adjustSliceEvent:(id)a0 asFirstOccurrenceOfMaster:(id)a1;
- (void)_adjustNewMaster:(id)a0 withSliceDate:(id)a1;
- (void)_modifyRecurrenceRulesOnEarlierMaster:(id)a0 laterMaster:(id)a1 sliceDate:(id)a2 isDelete:(BOOL)a3;
- (void)moveDetachedEventsAndExceptionsFromSeries:(id)a0 toSeries:(id)a1 sliceDate:(id)a2;
- (id)_computeAppropriateRecurrenceEndDateForEvent:(id)a0 sliceDate:(id)a1;
- (void)_moveExceptionsFromSeries:(id)a0 toSeries:(id)a1 sliceDate:(id)a2 copy:(BOOL)a3;
- (void)_moveDetachedEventsFromSeries:(id)a0 toSeries:(id)a1 sliceDate:(id)a2 copy:(BOOL)a3;
- (void)_moveExceptions:(id)a0 fromSeries:(id)a1 toSeries:(id)a2 sliceDate:(id)a3 copy:(BOOL)a4;
- (void)_moveDetachedEvents:(id)a0 fromSeries:(id)a1 toSeries:(id)a2 sliceDate:(id)a3 copy:(BOOL)a4;
- (BOOL)_shouldShiftExceptionDate:(id)a0 fromMaster:(id)a1 toMaster:(id)a2 sliceDate:(id)a3;
- (id)_validExceptionDateInNewSeries:(id)a0 originalDate:(id)a1;
- (BOOL)_shouldMoveExceptionDate:(id)a0 fromMaster:(id)a1 toMaster:(id)a2 sliceDate:(id)a3;
- (BOOL)_updateDatesFromDetachedEvent:(id)a0 toEvent:(id)a1 calendar:(id)a2 offset:(id)a3 duration:(id)a4;

@end
