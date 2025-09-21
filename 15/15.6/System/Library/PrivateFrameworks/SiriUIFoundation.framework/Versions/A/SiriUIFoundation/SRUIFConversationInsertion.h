@class AceObject, NSString, NSIndexPath;

@interface SRUIFConversationInsertion : NSObject

@property (readonly, nonatomic) long long conversationItemType;
@property (readonly, nonatomic) AceObject *aceObject;
@property (readonly, copy, nonatomic) NSString *aceCommandIdentifier;
@property (readonly, nonatomic, getter=isTransient) char transient;
@property (readonly, nonatomic, getter=isSupplemental) char supplemental;
@property (readonly, nonatomic, getter=isImmersiveExperience) char immersiveExperience;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)initWithConversationItemType:(long long)a0 aceObject:(id)a1 aceCommandIdentifier:(id)a2 transient:(char)a3 supplemental:(char)a4 immersiveExperience:(char)a5 indexPath:(id)a6;

@end
