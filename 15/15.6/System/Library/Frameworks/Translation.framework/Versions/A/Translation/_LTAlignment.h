@class NSString, NSDictionary;

@interface _LTAlignment : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) char shouldTranslate;
@property (copy, nonatomic) NSDictionary *sourceAttributes;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonRepresentation;

@end
