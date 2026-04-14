@class NSDictionary;

@interface SDSodiumSynonyms : NSObject {
    NSDictionary *synonymDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (id)getSynonymsForWord:(id)a0;
- (id)_cleanWord:(id)a0 unacceptableCharSet:(id)a1;
- (BOOL)_loadSynonymsFromFile:(id)a0 error:(id *)a1;
- (void)loadSynonymDictionary;

@end
