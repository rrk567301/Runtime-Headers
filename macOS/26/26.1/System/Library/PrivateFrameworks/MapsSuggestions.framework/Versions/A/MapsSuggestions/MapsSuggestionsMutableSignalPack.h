@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)addFromMapItem:(id)a0;
- (void)removeAll;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)addFromEntry:(id)a0;
- (BOOL)removeSignalType:(long long)a0;

@end
