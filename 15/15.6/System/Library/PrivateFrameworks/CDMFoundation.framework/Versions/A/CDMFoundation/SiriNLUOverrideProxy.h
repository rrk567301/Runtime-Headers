@interface SiriNLUOverrideProxy : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ componentOverrideStore;
    void /* unknown type, empty encoding */ overrideResults;
    void /* unknown type, empty encoding */ swiftifiedInputs;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUseTrie:(char)a0 useMemory:(char)a1;
- (char)isOverrideStoreValid;
- (char)loadComponentOverrideTrieStoreWithTrieFilePath:(id)a0;
- (char)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)a0;
- (id)matchWithInputs:(id)a0 overrideNamespace:(int)a1;
- (id)matchWithInputs:(id)a0 shouldAppend:(BOOL *)a1;
- (void)preheatWithLanguageCode:(id)a0;

@end
