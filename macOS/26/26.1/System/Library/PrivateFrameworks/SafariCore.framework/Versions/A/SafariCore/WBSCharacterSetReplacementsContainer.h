@class NSDictionary, NSCharacterSet;

@interface WBSCharacterSetReplacementsContainer : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *replacementStringsToCharacterSets;
@property (readonly, copy, nonatomic) NSCharacterSet *allCharacters;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateCharacterSetReplacementStringPairsUsingBlock:(id /* block */)a0;
- (id)initWithReplacementStringsToCharacterSets:(id)a0;

@end
