@interface TUIMixmojiCandidate : TIKeyboardCandidateSingle <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)action;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)title;
- (unsigned long long)hash;
- (id)initWithInput:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)alternativeText;

@end
