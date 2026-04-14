@class NSString, NSDictionary, NSURL;

@interface TESLocalizedPListLoader : NSObject {
    NSURL *_plistPath;
}

@property (readonly, nonatomic) NSString *localeIdentifier;
@property (nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSDictionary *items;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)_loadItems;
- (id)plistPath;
- (id)_resolvePlistPath;

@end
