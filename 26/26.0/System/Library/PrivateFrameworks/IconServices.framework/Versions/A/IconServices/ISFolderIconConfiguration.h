@class IFColor, NSString, NSDictionary, NSUUID;

@interface ISFolderIconConfiguration : NSObject <ISIconConfiguration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) IFColor *tintColor;
@property (retain) NSString *assetCatalogImageName;
@property (copy) NSString *symbolName;
@property (copy) NSString *emoji;
@property long long systemTintColor;
@property BOOL folderEmpty;
@property (readonly) BOOL hasTint;
@property (readonly) NSDictionary *plistExcerpt;
@property (readonly) NSUUID *digest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSymbolName:(id)a0 systemTintColor:(long long)a1;
- (id)resolvedTintColorForAppearance:(long long)a0;
- (id)colorString;
- (id)initWithIconDictionary:(id)a0;
- (id)initWithSymbolName:(id)a0 tintColor:(id)a1;

@end
