@class NSString, NSMutableArray;

@interface TTSSpeechString : NSObject

@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) TTSSpeechString *parentString;
@property (retain, nonatomic) NSString *transformedString;
@property (retain, nonatomic) NSMutableArray *transformations;

- (void).cxx_destruct;
- (id)initWithOriginalString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })translateRangeInTransformedString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)insertAtLocation:(unsigned long long)a0 string:(id)a1;
- (BOOL)transformRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 to:(id)a1;
- (BOOL)encapsulateSubstringAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withPrefix:(id)a1 andSuffix:(id)a2;
- (id)initWithParentSpeechString:(id)a0;
- (BOOL)_rangeIsValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_insertTransformation:(id)a0 forEncapsulatedTerminator:(BOOL)a1;

@end
