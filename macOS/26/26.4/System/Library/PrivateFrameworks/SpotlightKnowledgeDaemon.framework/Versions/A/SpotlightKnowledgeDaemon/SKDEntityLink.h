@class NSURL;

@interface SKDEntityLink : SKDEntity

@property (readonly, nonatomic) NSURL *link;

- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 score:(double)a2;

@end
