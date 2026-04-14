@interface ABCNContactNameOrderImpl : NSObject

+ (BOOL)isChineseJapaneseKoreanContact:(id)a0;
+ (BOOL)isEmptyNameContact:(id)a0;
+ (id)nameOrderForContact:(id)a0;
+ (id)defaultOrder;
+ (id)defaultNewContactOrder;
+ (id)firstNameFirstOrder;
+ (id)lastNameFirstOrder;

- (id)fullNameForContact:(id)a0;
- (id)phoneticFullNameForContact:(id)a0;
- (id)fullNameForContact:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)nameOrderEnum;
- (id)nameKeys;
- (id)phoneticNameKeys;

@end
