@class NSArray, ISConcreteIcon;

@interface ISAliasIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) id alias;
@property (readonly) ISConcreteIcon *resolvedIcon;
@property (readonly) ISConcreteIcon *icon;

+ (BOOL)supportsSecureCoding;
+ (id)aliasUUID;
+ (id)_iconForBookmarkData:(id)a0;
+ (id)_iconForValues:(id)a0;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)decorations;
- (void)resolve;
- (id)initWithBookmarkData:(id)a0;
- (id)makeResourceProvider;
- (id)initWithAliasURL:(id)a0;
- (id)initWithBookmarkData:(id)a0 decorations:(id)a1;

@end
