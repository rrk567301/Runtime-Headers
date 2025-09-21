@class NSDictionary, NSString;

@interface QLExtensionManagerCacheKey : NSObject <NSCopying>

@property (readonly) NSDictionary *attributes;
@property (readonly) char allowParentTypes;
@property (readonly) char wantsFirstPartyExtension;
@property (readonly) NSString *extensionPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 allowParentTypes:(char)a1 wantsFirstPartyExtension:(char)a2 extensionPath:(id)a3;

@end
