@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableArray;
@protocol SVSTranscriptItemGroupDelegate;

@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration> {
    NSMutableArray *_transcriptItems;
    NSMutableIndexSet *_insertionIndexes;
    double _presentationDelay;
}

@property (nonatomic, getter=_presentationDelayElapsed, setter=_setPresentationDelayElapsed:) BOOL presentationDelayElapsed;
@property (readonly, nonatomic) NSArray *transcriptItems;
@property (readonly, nonatomic) NSIndexSet *insertionIndexes;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic, getter=isEligibleForPresentation) BOOL eligibleForPresentation;
@property (readonly, nonatomic) BOOL waitsForConfirmation;
@property (weak, nonatomic) id<SVSTranscriptItemGroupDelegate> delegate;

- (id)description;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)removeElementAtIndex:(long long)a0;
- (id)initWithTranscriptItems:(id)a0 insertionIndexes:(id)a1 provisional:(BOOL)a2 waitsForConfirmation:(BOOL)a3 presentationDelay:(double)a4;
- (void)_presentationEligibilityConditionDidChange;
- (unsigned long long)insertionIndexForTranscriptItem:(id)a0;
- (void)replaceTranscriptItem:(id)a0 withTranscriptItem:(id)a1 cancelPresentationDelay:(BOOL)a2;
- (void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)a0 by:(long long)a1;

@end
