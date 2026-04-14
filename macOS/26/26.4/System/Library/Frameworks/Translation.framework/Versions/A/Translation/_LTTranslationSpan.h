@class NSString, NSData;

@interface _LTTranslationSpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } codePointsRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } codeUnitsRange;
@property (nonatomic) BOOL shouldTranslate;
@property (copy, nonatomic) NSData *metaInfoData;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 codePointsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 codeUnitsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithIdentifier:(id)a0 codePointsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 codeUnitsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 shouldTranslate:(BOOL)a3 metaInfoData:(id)a4;

@end
