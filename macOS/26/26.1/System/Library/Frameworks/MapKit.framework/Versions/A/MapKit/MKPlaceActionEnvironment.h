@class NSView, GEOAPPlaceCardModule;

@interface MKPlaceActionEnvironment : NSObject

@property (retain, nonatomic) NSView *sourceView;
@property (retain, nonatomic) GEOAPPlaceCardModule *analyticsModuleMetadata;
@property (nonatomic) BOOL isQuickAction;
@property (nonatomic) BOOL isActionBar;
@property (nonatomic) BOOL isActionBarMoreMenu;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;

@end
