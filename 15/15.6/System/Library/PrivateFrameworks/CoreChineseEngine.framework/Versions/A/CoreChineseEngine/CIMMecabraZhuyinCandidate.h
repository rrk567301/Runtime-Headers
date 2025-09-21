@class NSMutableIndexSet;

@interface CIMMecabraZhuyinCandidate : CIMMecabraCandidate

@property (nonatomic, getter=isWholeInputCandidate) char wholeInputCandidate;
@property (nonatomic, getter=isDirectlyCommitCandidate) char directlyCommitCandidate;
@property (nonatomic, getter=isFacemarkCandidate) char facemarkCandidate;
@property (nonatomic, getter=isPunctuationCandidate) char punctuationCandidate;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputBufferRange;
@property (retain, nonatomic) NSMutableIndexSet *cursorBoundariesIndexSet;
@property (readonly) char hasUnsupportedReading;

- (void).cxx_destruct;

@end
