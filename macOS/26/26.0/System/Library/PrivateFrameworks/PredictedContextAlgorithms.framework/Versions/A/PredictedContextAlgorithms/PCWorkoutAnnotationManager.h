@class PCTimeZoneManager, NSObject;
@protocol OS_dispatch_queue;

@interface PCWorkoutAnnotationManager : NSObject {
    PCTimeZoneManager *timeZoneManager;
}

@property (nonatomic) double visitLabelMediumConfidenceThreshold;
@property (nonatomic) double visitLabelHighConfidenceThreshold;
@property (nonatomic) double aoiVisitLabelConfidentThreshold;
@property (nonatomic) double maximumWatchPhoneVisitDistance;
@property (nonatomic) double visitMinimumIntersectionWithActivityAbsoluteTime;
@property (nonatomic) BOOL allowDuplicatedWorkouts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)annotateBaseEvents:(id)a0 contextEvents:(id)a1;
- (id)annotateEventBundle:(id)a0 withContextEvents:(id)a1 andBaseEventReference:(id)a2;
- (id)getBaseEvents:(id)a0;
- (id)getContextEventsForBaseEvents:(id)a0 events:(id)a1;
- (id)groupBaseEvents:(id)a0;
- (id)groupedEventsFromEvents:(id)a0;
- (id)intervalsFromEvents:(id)a0 boundaryInterval:(id)a1;
- (BOOL)isDominantPlaceForVisits:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)majorVisitsFromVisits:(id)a0 referenceDate:(id)a1;
- (double)overlapsIndexOfBaseEvents:(id)a0 contextEvents:(id)a1;
- (id)performAnnotationWithEvents:(id)a0;
- (id)performAnnotationWithEventsInternal:(id)a0;
- (id)referenceDateFromStartDate:(id)a0 endDate:(id)a1 index:(double)a2;
- (id)removeDuplicateWorkouts:(id)a0;
- (id)removePhoneActivitiesOverlappingWorkouts:(id)a0;
- (id)timespanFromEvents:(id)a0 boundaryInterval:(id)a1;

@end
