@class NSURL, GEOPDWebModuleConfiguration;

@interface GEOWebContentModuleConfiguration : NSObject {
    GEOPDWebModuleConfiguration *_webModuleConfig;
}

@property (readonly, nonatomic, getter=shouldDrawPlatter) char drawPlatter;
@property (readonly, nonatomic) NSURL *url;

- (id)description;
- (void).cxx_destruct;
- (id)initWithWebModuleConfiguration:(id)a0;

@end
