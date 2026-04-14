@class NSString, NSDictionary, NSURL;

@interface TESLocalizedPListLoader : NSObject {
    NSURL *_plistPath;
}

@property (readonly, nonatomic) NSString *localeIdentifier;
@property (nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSDictionary *items;

- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)plistPath;
- (id)_loadItems;
- (id)_resolvePlistPath;

@end
