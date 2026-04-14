@class NSArray;

@interface PFVideoMetadataBuilder : PFMetadataBuilder

@property (readonly, copy, nonatomic) NSArray *metadataItems;

- (id)commonItemForKey:(id)a0 string:(id)a1;
- (id)videoDateFormatter;
- (id)titleItem;
- (id)captionItem;
- (id)locationItem;
- (id)creationDateItem;
- (id)keywordsItem;
- (id)accessibilityDescriptionItem;

@end
