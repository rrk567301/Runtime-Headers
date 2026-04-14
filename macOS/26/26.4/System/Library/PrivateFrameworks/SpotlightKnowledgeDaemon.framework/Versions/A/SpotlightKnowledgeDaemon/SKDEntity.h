@class NSString;

@interface SKDEntity : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) id value;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 value:(id)a2 score:(double)a3;
- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 identifier:(id)a2 value:(id)a3 score:(double)a4;
- (id)initWithText:(id)a0 value:(id)a1 score:(double)a2;

@end
