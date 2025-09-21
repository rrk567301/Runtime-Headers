@class GEOPDHeaderButtonsConfiguration;

@interface GEOHeaderButtonModuleConfiguration : NSObject {
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;
}

@property (readonly, nonatomic, getter=shouldSuppressDirections) char suppressDirections;

- (void).cxx_destruct;
- (id)initWithHeaderButtonConfiguration:(id)a0;

@end
