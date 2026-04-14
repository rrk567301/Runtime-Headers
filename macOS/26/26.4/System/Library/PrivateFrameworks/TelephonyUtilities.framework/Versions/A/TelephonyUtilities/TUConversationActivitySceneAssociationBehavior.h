@class NSString;

@interface TUConversationActivitySceneAssociationBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationActivitySceneAssociationBehavior *defaultBehavior;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly, nonatomic) BOOL shouldAssociateScene;
@property (readonly, copy, nonatomic) NSString *preferredSceneSessionRole;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetContentIdentifier:(id)a0 shouldAssociateScene:(BOOL)a1 preferredSceneSessionRole:(id)a2;
- (BOOL)isEquivalentToSceneAssociationBehavior:(id)a0;

@end
