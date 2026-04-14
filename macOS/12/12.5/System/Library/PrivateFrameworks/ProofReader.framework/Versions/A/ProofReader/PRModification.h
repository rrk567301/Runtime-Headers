@interface PRModification : NSObject

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)replacementString;
- (unsigned long long)modificationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (double)modificationScore;

@end
