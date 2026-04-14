@class NSDictionary, ISConcreteIcon, NSArray;

@interface ISAliasIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) id alias;
@property (readonly) ISConcreteIcon *resolvedIcon;
@property (retain) NSDictionary *additionalURLProperties;
@property (readonly) ISConcreteIcon *icon;

+ (BOOL)supportsSecureCoding;
+ (id)_iconForValues:(id)a0;
+ (id)_iconForBookmarkData:(id)a0;
+ (id)aliasUUID;

- (void)resolve;
- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBookmarkData:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)decorations;
- (id)initWithAliasURL:(id)a0;
- (id)initWithBookmarkData:(id)a0 decorations:(id)a1;

@end
