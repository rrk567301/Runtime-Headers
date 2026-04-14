@class NSString, NSArray, LPLinkMetadata;

@interface SLShareableContentMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *registeredTypeIdentifiers;
@property (readonly, nonatomic) LPLinkMetadata *metadata;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSceneIdentifier:(id)a0 bundleIdentifier:(id)a1 registeredTypeIdentifiers:(id)a2 metadata:(id)a3;

@end
