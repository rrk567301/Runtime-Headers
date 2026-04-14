@class NSString, NSTimeZone, NSDate;

@interface SKDDataDetectorInput : SKDModelInput {
    NSString *_text;
    NSString *_language;
    NSDate *_referenceDate;
    NSTimeZone *_referenceTimezone;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;
- (id)initWithInputID:(int)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 language:(id)a3;
- (id)initWithInputID:(int)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 language:(id)a3 referenceDate:(id)a4 referenceTimezone:(id)a5;

@end
