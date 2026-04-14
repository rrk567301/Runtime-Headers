@interface SiriNLUOverrideProxy : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ componentOverrideStore;
    void /* unknown type, empty encoding */ overrideResults;
    void /* unknown type, empty encoding */ swiftifiedInputs;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithUseTrie:(BOOL)a0 useMemory:(BOOL)a1;
- (BOOL)isOverrideStoreValid;
- (BOOL)loadComponentOverrideTrieStoreWithTrieFilePath:(id)a0;
- (BOOL)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)a0;
- (id)matchWithInputs:(id)a0 overrideNamespace:(int)a1;
- (id)matchWithInputs:(id)a0 shouldAppend:(BOOL *)a1;
- (void)preheatWithLanguageCode:(id)a0;

@end
