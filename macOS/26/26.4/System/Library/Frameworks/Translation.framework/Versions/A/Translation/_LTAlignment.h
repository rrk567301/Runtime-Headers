@class NSString, NSDictionary;

@interface _LTAlignment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSDictionary *sourceAttributes;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)jsonRepresentation;
- (id)initWithIdentifier:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 targetText:(id)a3 shouldTranslate:(BOOL)a4;

@end
