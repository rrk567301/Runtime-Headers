@class NSString, NSData;

@interface _LTTranslationSpan : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) char shouldTranslate;
@property (copy, nonatomic) NSData *metaInfoData;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 shouldTranslate:(char)a2 metaInfoData:(id)a3;

@end
