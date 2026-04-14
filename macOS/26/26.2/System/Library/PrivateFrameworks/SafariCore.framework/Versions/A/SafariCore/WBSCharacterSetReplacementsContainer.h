@class NSDictionary, NSCharacterSet;

@interface WBSCharacterSetReplacementsContainer : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *replacementStringsToCharacterSets;
@property (readonly, copy, nonatomic) NSCharacterSet *allCharacters;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)enumerateCharacterSetReplacementStringPairsUsingBlock:(id /* block */)a0;
- (id)initWithReplacementStringsToCharacterSets:(id)a0;

@end
