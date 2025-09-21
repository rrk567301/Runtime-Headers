@class NSUUID, AceObject, NSString, AFDialogPhase, AFDataStore;

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *revisionIdentifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) AceObject *aceObject;
@property (retain, nonatomic) AFDialogPhase *dialogPhase;
@property (copy, nonatomic) NSString *aceCommandIdentifier;
@property (nonatomic) long long presentationState;
@property (nonatomic, getter=isVirgin) char virgin;
@property (nonatomic, getter=isTransient) char transient;
@property (nonatomic, getter=isSupplemental) char supplemental;
@property (nonatomic, getter=isImmersiveExperience) char immersiveExperience;
@property (nonatomic, getter=isPersistentAcrossInvocations) char persistentAcrossInvocations;
@property (readonly, nonatomic) AFDataStore *associatedDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void)_didMutate;
- (long long)_presentationStateForPropertyListString:(id)a0;
- (id)_propertyListStringForPresentationState;
- (id)_propertyListStringForType;
- (char)_shouldRedactSpeakableText;
- (long long)_typeForPropertyListString:(id)a0;
- (id)initWithIdentifier:(id)a0 revisionIdentifier:(id)a1 type:(long long)a2 aceObject:(id)a3 dialogPhase:(id)a4 presentationState:(long long)a5 aceCommandIdentifier:(id)a6 virgin:(char)a7 transient:(char)a8 supplemental:(char)a9 immersiveExperience:(char)a10 persistentAcrossInvocations:(char)a11 associatedDataStore:(id)a12;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 aceObject:(id)a2 dialogPhase:(id)a3 presentationState:(long long)a4 aceCommandIdentifier:(id)a5 virgin:(char)a6 transient:(char)a7 supplemental:(char)a8 immersiveExperience:(char)a9 persistentAcrossInvocations:(char)a10 associatedDataStore:(id)a11;
- (id)initWithType:(long long)a0 aceObject:(id)a1 dialogPhase:(id)a2 presentationState:(long long)a3 aceCommandIdentifier:(id)a4 virgin:(char)a5 transient:(char)a6 supplemental:(char)a7 immersiveExperience:(char)a8 persistentAcrossInvocations:(char)a9 associatedDataStore:(id)a10;

@end
