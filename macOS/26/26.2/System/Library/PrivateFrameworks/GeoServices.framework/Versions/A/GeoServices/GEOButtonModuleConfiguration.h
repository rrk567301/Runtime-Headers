@class NSArray, GEOPDButtonModuleConfiguration;

@interface GEOButtonModuleConfiguration : NSObject {
    GEOPDButtonModuleConfiguration *_buttonModuleConfig;
}

@property (readonly, nonatomic) NSArray *buttonItems;

- (void).cxx_destruct;
- (id)description;
- (id)initWithButtonModuleConfiguration:(id)a0;

@end
