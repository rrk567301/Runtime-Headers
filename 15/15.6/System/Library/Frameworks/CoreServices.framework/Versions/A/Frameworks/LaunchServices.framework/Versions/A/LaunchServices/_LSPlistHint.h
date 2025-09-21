@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject <NSCopying> {
    NSSet *_keys;
    NSDictionary *_cachedValues;
    char _cachedValuesAreComplete;
    char _keysAreCompacted;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
