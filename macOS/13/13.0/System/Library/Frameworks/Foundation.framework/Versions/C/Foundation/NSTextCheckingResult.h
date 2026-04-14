@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long resultType;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (void)initialize;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 orthography:(id)a1;
+ (id)spellCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)grammarCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 details:(id)a1;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 date:(id)a1 timeZone:(id)a2 duration:(double)a3;
+ (id)addressCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;
+ (id)linkCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 URL:(id)a1;
+ (id)quoteCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)dashCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)replacementCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 alternativeStrings:(id)a2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 phoneNumber:(id)a1;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)date;
- (id)timeZone;
- (id)URL;
- (id)replacementString;
- (unsigned long long)numberOfRanges;
- (double)duration;
- (id)referenceDate;
- (id)components;
- (void)encodeRangeWithCoder:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })decodeRangeWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithName:(id)a0;
- (id)orthography;
- (id)grammarDetails;
- (id)leadingText;
- (id)trailingText;
- (id)addressComponents;
- (id)alternativeStrings;
- (id)regularExpression;
- (id)phoneNumber;
- (void *)underlyingResult;
- (BOOL)timeIsSignificant;
- (BOOL)timeIsApproximate;
- (BOOL)timeIsPast;

@end
