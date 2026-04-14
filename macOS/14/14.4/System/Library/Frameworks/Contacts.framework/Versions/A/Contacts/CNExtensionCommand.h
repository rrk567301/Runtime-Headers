@class NSString, CNContactProviderSession;

@interface CNExtensionCommand : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *commandType;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) CNContactProviderSession *session;

+ (id)new;
+ (id)disable;
+ (id)enable;
+ (id)disableBundleIdentifier:(id)a0;
+ (id)enableBundleIdentifier:(id)a0;
+ (id)fetchContainerIdentifier;
+ (id)fetchEnabled;
+ (id)fetchExtensionItems;
+ (id)fetchExtensionItemsCount;
+ (id)synchronizeUsingSession:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommandType:(id)a0;

@end
