@class NSArray;

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSArray *metadataItems;

- (id)commonItemForKey:(id)a0 string:(id)a1;
- (id)titleItem;
- (id)captionItem;
- (id)accessibilityDescriptionItem;
- (id)locationItem;
- (id)creationDateItem;
- (id)videoDateFormatter;
- (id)keywordsItem;

@end
