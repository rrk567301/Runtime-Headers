@class NSDictionary, NSDate;

@interface PKDynamicAssetIndex : NSObject {
    NSDictionary *_index;
}

@property (readonly, nonatomic) NSDate *dateCreated;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)description;
- (id)mappedAssetIdentifier:(id)a0;
- (id)mappedStringIdentifier:(id)a0;

@end
