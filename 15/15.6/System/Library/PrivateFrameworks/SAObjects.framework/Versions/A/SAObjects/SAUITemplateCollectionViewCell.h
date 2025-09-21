@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *monogramName;
@property (nonatomic) char sizeToFitImage;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSArray *themeImages;
@property (copy, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectionViewCell;
+ (id)collectionViewCellWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
