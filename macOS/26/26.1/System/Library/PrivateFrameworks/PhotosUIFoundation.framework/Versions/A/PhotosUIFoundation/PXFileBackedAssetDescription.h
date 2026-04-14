@class NSURL, NSImage, NSMutableDictionary;

@interface PXFileBackedAssetDescription : NSObject {
    NSMutableDictionary *_descriptionDictionary;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSImage *previewImage;

+ (id)simpleImageDescriptionWithURL:(id)a0;
+ (id)simpleImageDescriptionWithURL:(id)a0 previewImage:(id)a1;

- (id)initWithURL:(id)a0;
- (id)description;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (id)initWithURL:(id)a0 previewImage:(id)a1;

@end
