@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {
    NSMutableDictionary *_trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray { } *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)a0 allowingEndOfWordMatches:(char)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_addWord:(id)a0 allowingEndOfWordMatch:(char)a1;

@end
