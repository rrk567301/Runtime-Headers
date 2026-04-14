@class NSArray, GEOButtonItem, GEOPDActionBarModuleConfiguration;

@interface GEOActionBarModuleConfiguration : NSObject {
    GEOPDActionBarModuleConfiguration *_actionBarModuleConfig;
}

@property (readonly, nonatomic) GEOButtonItem *primaryButtonItem;
@property (readonly, nonatomic) NSArray *secondaryButtonItems;

- (void).cxx_destruct;
- (id)description;
- (id)initWithActionBarConfiguration:(id)a0;

@end
