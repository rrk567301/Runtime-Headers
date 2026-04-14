@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (void)removeAll;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)removeSignalType:(long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)addFromEntry:(id)a0;
- (BOOL)addFromMapItem:(id)a0;

@end
