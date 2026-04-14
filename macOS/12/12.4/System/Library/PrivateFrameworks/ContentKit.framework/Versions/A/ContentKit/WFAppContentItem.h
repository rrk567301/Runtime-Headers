@class NSString;

@interface WFAppContentItem : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (void).cxx_destruct;

@end
