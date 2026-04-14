@class NSString;

@interface MapsSuggestionsNearbyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    double maxDistance;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (id)init;
- (id)initWithMaximumDistance:(double)a0;
- (BOOL)shouldKeepEntry:(id)a0;

@end
