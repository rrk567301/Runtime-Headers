@class NSString;

@interface WBSRichSearchSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *entityIDURLParameter;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 entityIDURLParameter:(id)a2;

@end
