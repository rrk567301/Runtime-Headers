@class NSDate;

@interface SKDEntityDate : SKDEntity

@property (readonly, nonatomic) NSDate *date;

- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 date:(id)a2 key:(id)a3 score:(double)a4;

@end
