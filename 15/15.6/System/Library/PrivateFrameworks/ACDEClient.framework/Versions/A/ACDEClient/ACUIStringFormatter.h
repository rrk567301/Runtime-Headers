@class NSString;

@interface ACUIStringFormatter : NSFormatter

@property unsigned long long limit;
@property (retain) NSString *limitErrorString;
@property char shouldBeepOnError;

- (void)dealloc;
- (id)init;
- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;

@end
