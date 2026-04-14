@class NSView, GEOAPPlaceCardModule;

@interface MKPlaceActionEnvironment : NSObject

@property (retain, nonatomic) NSView *sourceView;
@property (retain, nonatomic) GEOAPPlaceCardModule *analyticsModuleMetadata;
@property (nonatomic) BOOL isQuickAction;

- (void).cxx_destruct;

@end
