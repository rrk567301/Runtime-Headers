@class NSString, GEOGuideLocation, GEOPDExploreGuides;

@interface GEOExploreGuides : NSObject {
    GEOPDExploreGuides *_pdExploreGuides;
}

@property (readonly, nonatomic) GEOGuideLocation *guideLocation;
@property (readonly, nonatomic) NSString *imageTemplateURL;

+ (id)imageDownloadUrlFromTemplateUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageURLForSize:(struct CGSize { double x0; double x1; })a0 imageTemplateURL:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExploreGuides:(id)a0;

@end
