@class NSString, NSCharacterSet;

@interface TICharacterSetDescription : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSCharacterSet *_characterSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long baseIdentifier;
@property (copy, nonatomic) NSString *charactersAddedToBase;
@property (copy, nonatomic) NSString *charactersRemovedFromBase;
@property (readonly, nonatomic) BOOL inverted;
@property (readonly, nonatomic) NSCharacterSet *characterSet;

- (id)initWithBase:(long long)a0 additionalCharacters:(id)a1 removedCharacters:(id)a2 inverted:(BOOL)a3;
- (id)initWithBaseCharacterSet:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newCharacterSetFromDescription;
- (void)clearCachedCharacterSet;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)invertedSetDescription;
- (id)description;
- (id)initWithCharactersInString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;

@end
