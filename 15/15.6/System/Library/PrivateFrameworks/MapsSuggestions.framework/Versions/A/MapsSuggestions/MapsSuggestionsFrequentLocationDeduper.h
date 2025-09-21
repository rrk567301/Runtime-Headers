@class NSString;

@interface MapsSuggestionsFrequentLocationDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isEnabled;

- (char)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
