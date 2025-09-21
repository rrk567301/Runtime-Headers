@class NSArray, GEOButtonItem, GEOPDActionBarModuleConfiguration;

@interface GEOActionBarModuleConfiguration : NSObject {
    GEOPDActionBarModuleConfiguration *_actionBarModuleConfig;
}

@property (readonly, nonatomic) GEOButtonItem *primaryButtonItem;
@property (readonly, nonatomic) NSArray *secondaryButtonItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithActionBarConfiguration:(id)a0;

@end
