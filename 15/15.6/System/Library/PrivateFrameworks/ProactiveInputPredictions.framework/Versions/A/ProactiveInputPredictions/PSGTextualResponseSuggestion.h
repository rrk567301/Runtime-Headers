@class NSString;

@interface PSGTextualResponseSuggestion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *responseText;
@property (readonly, nonatomic) NSString *responseCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 category:(id)a1;
- (char)isEqualToTextualSuggestion:(id)a0;

@end
