@class NSString, NSMutableArray;

@interface TTSSpeechString : NSObject

@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) TTSSpeechString *parentString;
@property (retain, nonatomic) NSString *transformedString;
@property (retain, nonatomic) NSMutableArray *transformations;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) char finalized;
@property (readonly, nonatomic) NSString *defrostedTransformedString;

- (void).cxx_destruct;
- (id)initWithOriginalString:(id)a0;
- (char)encapsulateSubstringAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withPrefix:(id)a1 andSuffix:(id)a2;
- (char)insertAtLocation:(unsigned long long)a0 string:(id)a1;
- (char)transformRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 to:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })translateRangeInTransformedString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_insertTransformation:(id)a0 forEncapsulatedTerminator:(char)a1;
- (char)_rangeIsValid:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_transformedStringNonMutating;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_translateRangeInTransformedString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withParent:(id)a1;
- (id)initWithParentSpeechString:(id)a0;
- (id)initWithSSMLString:(id)a0;
- (void)replaceOccurencesOfString:(id)a0 withString:(id)a1;
- (id)xmlEscaped;
- (id)xmlUnescaped;

@end
