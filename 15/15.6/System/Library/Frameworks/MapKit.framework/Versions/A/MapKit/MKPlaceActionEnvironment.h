@class NSView, GEOAPPlaceCardModule;

@interface MKPlaceActionEnvironment : NSObject

@property (retain, nonatomic) NSView *sourceView;
@property (retain, nonatomic) GEOAPPlaceCardModule *analyticsModuleMetadata;
@property (nonatomic) char isQuickAction;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
