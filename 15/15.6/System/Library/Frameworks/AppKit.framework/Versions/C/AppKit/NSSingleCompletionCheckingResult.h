@class NSIndexSet;

@interface NSSingleCompletionCheckingResult : NSCompletionCheckingResult

@property (readonly) unsigned long long stopCompletingIndex;
@property (readonly, copy) NSIndexSet *completeWordIndexes;
@property (readonly) char isPromoted;
@property (readonly) char forceDisplay;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 completeWordIndexes:(id)a2 isPromoted:(char)a3;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 completeWordIndexes:(id)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 completeWordIndexes:(id)a2 isPromoted:(char)a3 forceDisplay:(char)a4;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 forceDisplay:(char)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 stopCompletingIndex:(unsigned long long)a2;
- (char)isSingleCompletion;

@end
