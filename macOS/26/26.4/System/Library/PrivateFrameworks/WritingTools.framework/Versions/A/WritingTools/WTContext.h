@class NSUUID, WTSmartReplyConfiguration, NSAttributedString;

@interface WTContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WTSmartReplyConfiguration *smartReplyConfig;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)setAttributedText:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributedText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
