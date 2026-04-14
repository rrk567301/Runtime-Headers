@interface PRModification : NSObject

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)modificationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })syllableRange;
- (double)modificationScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })additionalSyllableRange;
- (id)replacementString;

@end
