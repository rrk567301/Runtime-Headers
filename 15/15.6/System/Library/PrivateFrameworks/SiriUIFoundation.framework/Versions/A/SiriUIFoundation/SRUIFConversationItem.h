@class NSString, SRUIFMutableConversationItem;

@interface SRUIFConversationItem : NSObject <SRUIFConversationStorable, NSCopying> {
    SRUIFMutableConversationItem *_delegateItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (char)isTransient;
- (long long)presentationState;
- (id)revisionIdentifier;
- (id)dialogPhase;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)initWithDelegateItem:(id)a0;
- (char)isImmersiveExperience;
- (char)isSupplemental;
- (char)isVirgin;
- (id)initWithIdentifier:(id)a0 revisionIdentifier:(id)a1 type:(long long)a2 aceObject:(id)a3 dialogPhase:(id)a4 presentationState:(long long)a5 aceCommandIdentifier:(id)a6 virgin:(char)a7 transient:(char)a8 supplemental:(char)a9 immersiveExperience:(char)a10 associatedDataStore:(id)a11;
- (id)initWithType:(long long)a0 aceObject:(id)a1 dialogPhase:(id)a2 presentationState:(long long)a3 aceCommandIdentifier:(id)a4 virgin:(char)a5 transient:(char)a6 supplemental:(char)a7 immersiveExperience:(char)a8 associatedDataStore:(id)a9;

@end
