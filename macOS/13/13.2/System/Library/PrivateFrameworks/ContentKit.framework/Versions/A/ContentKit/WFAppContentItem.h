@class NSString;

@interface WFAppContentItem : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)typeDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (void).cxx_destruct;

@end
