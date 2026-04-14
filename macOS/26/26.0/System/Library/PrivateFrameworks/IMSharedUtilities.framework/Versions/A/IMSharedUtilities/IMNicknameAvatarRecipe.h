@class NSData;

@interface IMNicknameAvatarRecipe : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *recipeData;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAvatarRecipe:(id)a0;

@end
