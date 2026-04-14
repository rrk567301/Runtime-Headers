@interface PRModification : NSObject

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)replacementString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (double)modificationScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;
- (unsigned long long)modificationType;

@end
