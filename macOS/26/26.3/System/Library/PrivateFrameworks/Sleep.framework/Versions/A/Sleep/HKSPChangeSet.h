@class NSSet, NSMutableDictionary, NSArray, NSString;

@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *changeDictionary;
@property (readonly, nonatomic) NSSet *topLevelChangeKeys;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)changedValueForPropertyIdentifier:(id)a0;
- (void)applyChangeSet:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addChange:(id)a0;
- (id)initWithChangeDictionary:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)deepCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)originalValueForPropertyIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllChanges;
- (BOOL)hasChangeForPropertyIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
