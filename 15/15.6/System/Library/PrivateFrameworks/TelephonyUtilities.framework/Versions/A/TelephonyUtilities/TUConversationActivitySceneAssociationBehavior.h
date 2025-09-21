@class NSString;

@interface TUConversationActivitySceneAssociationBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) TUConversationActivitySceneAssociationBehavior *defaultBehavior;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly, nonatomic) char shouldAssociateScene;
@property (readonly, copy, nonatomic) NSString *preferredSceneSessionRole;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTargetContentIdentifier:(id)a0 shouldAssociateScene:(char)a1 preferredSceneSessionRole:(id)a2;
- (char)isEquivalentToSceneAssociationBehavior:(id)a0;

@end
