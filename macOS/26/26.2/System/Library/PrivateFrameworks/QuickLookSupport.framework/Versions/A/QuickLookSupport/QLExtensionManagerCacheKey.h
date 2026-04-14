@class NSDictionary, NSString;

@interface QLExtensionManagerCacheKey : NSObject <NSCopying>

@property (readonly) NSDictionary *attributes;
@property (readonly) BOOL allowParentTypes;
@property (readonly) BOOL wantsFirstPartyExtension;
@property (readonly) NSString *extensionPath;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 allowParentTypes:(BOOL)a1 wantsFirstPartyExtension:(BOOL)a2 extensionPath:(id)a3;

@end
