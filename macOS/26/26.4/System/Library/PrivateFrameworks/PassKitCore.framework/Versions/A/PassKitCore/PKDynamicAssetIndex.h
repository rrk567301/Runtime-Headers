@class NSDictionary, NSDate;

@interface PKDynamicAssetIndex : NSObject {
    NSDictionary *_index;
}

@property (readonly, nonatomic) NSDate *dateCreated;

- (id)initWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mappedAssetIdentifier:(id)a0;
- (id)mappedStringIdentifier:(id)a0;

@end
