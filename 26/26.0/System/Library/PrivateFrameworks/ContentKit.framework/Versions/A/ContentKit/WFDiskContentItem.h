@class WFDisk;

@interface WFDiskContentItem : WFFolderContentItem

@property (readonly, nonatomic) WFDisk *disk;

+ (id)allProperties;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;

- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)includesHiddenFiles;

@end
