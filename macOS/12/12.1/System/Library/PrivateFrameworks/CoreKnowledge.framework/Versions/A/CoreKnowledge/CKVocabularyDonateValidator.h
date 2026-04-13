@interface CKVocabularyDonateValidator : NSObject {
    Class _externalItemClass;
}

- (id)init;
- (id)initWithItemClass:(Class)a0;
- (long long)validateVocabularyItem:(id)a0;

@end
