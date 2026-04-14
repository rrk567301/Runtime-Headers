@class NSString, NSAttributedString, TCAttributedStringFormatOptions;

@interface TCAttributedStringFormatter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSAttributedString *digestedAttributedString;
@property (readonly, copy) NSString *inputFormattedString;
@property (readonly, copy) TCAttributedStringFormatOptions *formatOptions;

+ (id)digestedAttributedStringFromFormattedString:(id)a0 formatOptions:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)digestedAttributedStringFromFormattedString:(id)a0;
- (id)initWithDigestedAttributedString:(id)a0 formatOptions:(id)a1;
- (id)initWithDigestedAttributedString:(id)a0 inputFormattedString:(id)a1 formatOptions:(id)a2;

@end
