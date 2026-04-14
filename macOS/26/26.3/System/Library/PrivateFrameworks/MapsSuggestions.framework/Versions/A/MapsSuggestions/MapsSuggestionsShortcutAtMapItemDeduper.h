@class NSString;

@interface MapsSuggestionsShortcutAtMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    struct vector<MapsSuggestionsEntryType, std::allocator<MapsSuggestionsEntryType>> { long long *__begin_; long long *__end_; struct { long long *__cap_; } ; } _types;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)initWithSacrificedTypes:(const void *)a0;
- (id).cxx_construct;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
