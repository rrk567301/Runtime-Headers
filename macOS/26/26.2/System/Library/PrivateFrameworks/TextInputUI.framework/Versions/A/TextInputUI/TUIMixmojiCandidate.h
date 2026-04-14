@interface TUIMixmojiCandidate : TIKeyboardCandidateSingle <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)action;
- (id)title;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInput:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)alternativeText;

@end
