@class AVStringSearchPredicate, AVLegibleMediaSearchMatchDescription, NSArray;

@interface AVLegibleMediaSearchCursor : AVSearchCursor {
    struct OpaqueFigCaptionSearch { } *_captionSearchService;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _inputPTS;
    AVStringSearchPredicate *_predicate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _hasBeenSetUp;
    unsigned long long _matchIndex;
    unsigned long long _cueMatchIndex;
    unsigned long long _numMatchesInCue;
    NSArray *_results;
}

@property (readonly, nonatomic) AVStringSearchPredicate *predicate;
@property (readonly, nonatomic) AVLegibleMediaSearchMatchDescription *matchDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_unsafeSetupCursorIfNeeded;
- (BOOL)_hasMatches;
- (id)initWithSearchService:(struct OpaqueFigCaptionSearch { } *)a0 forPredicate:(id)a1 atPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (long long)_unsafeStepMatchesByCount:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })presentationTimeStamp;
- (unsigned long long)_numberOfMatchesInCueAtIndex:(unsigned long long)a0;
- (int)_unsafeFindMatches;
- (void)_findClosestMatchAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 outMatchIndex:(unsigned long long *)a1 outCueMatchIndex:(unsigned long long *)a2;
- (id)initWithSearchService:(struct OpaqueFigCaptionSearch { } *)a0 forPredicate:(id)a1;
- (long long)stepMatchesByCount:(long long)a0;

@end
