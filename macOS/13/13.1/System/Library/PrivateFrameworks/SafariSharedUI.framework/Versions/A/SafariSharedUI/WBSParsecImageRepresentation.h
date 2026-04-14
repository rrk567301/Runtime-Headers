@class SFImage, NSString, NSImage, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface WBSParsecImageRepresentation : WBSParsecModel {
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    NSImage *_image;
    BOOL _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
    SFImage *_sfImage;
}

@property (readonly, nonatomic) NSNumber *baselineOffset;
@property (readonly, nonatomic) NSNumber *roundCornerRadius;

+ (id)schema;
+ (id)_bagImageDataCache;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithJSONObject:(id)a0;
- (id)imageWithSession:(id)a0;
- (id)initWithSFImage:(id)a0;
- (id)imageWithScaleFactor:(double)a0;
- (void)_fetchImageData;
- (void)_fetchImageDataUsingBlock:(id /* block */)a0;
- (id)_templateImageWithImage:(id)a0;
- (id)_imageWithData:(id)a0;
- (id)test_data;
- (id)test_identifier;
- (id)test_imageURLString;
- (BOOL)test_isTemplate;

@end
