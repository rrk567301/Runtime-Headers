@class NSString, NSCharacterSet;

@interface TICharacterSetDescription : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSCharacterSet *_characterSet;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long baseIdentifier;
@property (copy, nonatomic) NSString *charactersAddedToBase;
@property (copy, nonatomic) NSString *charactersRemovedFromBase;
@property (readonly, nonatomic) char inverted;
@property (readonly, nonatomic) NSCharacterSet *characterSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)clearCachedCharacterSet;
- (id)initWithBase:(long long)a0 additionalCharacters:(id)a1 removedCharacters:(id)a2 inverted:(char)a3;
- (id)initWithBaseCharacterSet:(long long)a0;
- (id)initWithCharactersInString:(id)a0;
- (id)invertedSetDescription;
- (id)newCharacterSetFromDescription;

@end
