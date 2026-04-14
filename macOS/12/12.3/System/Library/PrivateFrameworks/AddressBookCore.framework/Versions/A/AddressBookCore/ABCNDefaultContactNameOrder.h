@class ABUserDefaults;

@interface ABCNDefaultContactNameOrder : ABCNContactNameOrderImpl {
    ABUserDefaults *_userDefaults;
}

- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)a0;
- (id)defaultNameOrder;
- (id)fullNameForContact:(id)a0;
- (id)phoneticFullNameForContact:(id)a0;
- (id)fullNameForContact:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)nameOrderEnum;
- (id)nameKeys;
- (id)phoneticNameKeys;

@end
