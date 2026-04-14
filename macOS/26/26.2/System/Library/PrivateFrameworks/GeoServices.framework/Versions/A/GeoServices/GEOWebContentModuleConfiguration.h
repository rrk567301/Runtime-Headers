@class NSURL, GEOPDWebModuleConfiguration;

@interface GEOWebContentModuleConfiguration : NSObject {
    GEOPDWebModuleConfiguration *_webModuleConfig;
}

@property (readonly, nonatomic, getter=shouldDrawPlatter) BOOL drawPlatter;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWebModuleConfiguration:(id)a0;

@end
