@class NSString;

@interface SKDEntityAddress : SKDEntity

@property (readonly, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 score:(double)a2;

@end
