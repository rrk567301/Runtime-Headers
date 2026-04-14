@class NSURL, NSMutableDictionary;

@interface PXFileBackedAssetDescription : NSObject {
    NSMutableDictionary *_descriptionDictionary;
}

@property (readonly, copy, nonatomic) NSURL *url;

+ (id)simpleImageDescriptionWithURL:(id)a0;

- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
