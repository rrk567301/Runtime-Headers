@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;


- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAll;
- (char)addFromMapItem:(id)a0;
- (char)addFromEntry:(id)a0;
- (char)removeSignalType:(long long)a0;
- (char)writeSignalValue:(float)a0 forType:(long long)a1;
- (char)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (char)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;

@end
