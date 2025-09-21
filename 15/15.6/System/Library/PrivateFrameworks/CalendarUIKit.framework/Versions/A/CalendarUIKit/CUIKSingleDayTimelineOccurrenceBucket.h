@class NSArray, CUIKSingleDayTimelineLayoutPartition, NSMutableArray;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
    id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
    id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
    char _useTemporaryFitnessLevel;
    char _temporaryFitnessLevelRequiresCalculation;
    double _temporaryFitnessLevel;
    char _originalFitnessLevelRequiresCalculation;
    double _originalFitnessLevel;
    char _ignoreFirstOccurrenceInFitnessCalculations;
    char _ignoreLastOccurrenceInFitnessCalculations;
}

@property (retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition;
@property (retain, nonatomic) NSMutableArray *currentOccurrences;
@property (readonly, nonatomic) NSArray *occurrences;
@property (nonatomic) char isOnlyBucket;
@property (weak) id<CUIKSingleDayTimelineGeometryDelegate> geometryDelegate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roundRectToScreenScaleForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenUtilsDelegate:(id)a1;

- (void).cxx_destruct;
- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToBeginning:(id)a0;
- (void)addOccurrenceTemporarilyToEnd:(id)a0;
- (id)earliestOccurrence;
- (id)initWithOccurrences:(id)a0 correspondingPartition:(id)a1 screenUtilsDelegate:(id)a2 geometryDelegate:(id)a3;
- (void)makeTemporaryChangesPermanent;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;
- (void)stampFramesOntoOccurrences;

@end
