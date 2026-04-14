@class NSString, NSArray;

@interface ATXFaceSuggestionConfiguredWatchFaceSignal : NSObject <ATXFaceSuggestionSignal> {
    NSArray *_watchFaces;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (double)valueForDescriptor:(id)a0;

@end
