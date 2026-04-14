@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)copy;
- (void)removeAll;
- (BOOL)addFromMapItem:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)removeSignalType:(long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (BOOL)addFromEntry:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;

@end
