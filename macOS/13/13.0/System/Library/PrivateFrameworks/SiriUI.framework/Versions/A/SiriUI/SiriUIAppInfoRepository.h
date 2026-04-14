@interface SiriUIAppInfoRepository : NSObject

- (id)frontmostAppsThatAreNotSiri;
- (id)_appInfoAtIndex:(long long)a0 ofArray:(struct __CFArray { } *)a1;
- (int)_pidWithLSDictionary:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)_copyLsDictionaryOfAppAtIndex:(long long)a0 inArray:(struct __CFArray { } *)a1;

@end
