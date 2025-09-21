@class NSString;

@interface MapsSuggestionsNoTitleFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isEnabled;

- (char)shouldKeepEntry:(id)a0;

@end
