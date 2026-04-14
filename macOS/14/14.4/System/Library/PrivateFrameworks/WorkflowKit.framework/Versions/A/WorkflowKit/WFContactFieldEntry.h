@class WFEmailAddress, WFContact, NSString, WFMessageGroup, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, NSSecureCoding, WFParameterState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) WFContact *contact;
@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;
@property (readonly, nonatomic) WFEmailAddress *emailAddress;
@property (readonly, nonatomic) NSString *customHandle;
@property (readonly, nonatomic) WFMessageGroup *messageGroup;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processingValueClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serializedRepresentation;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithContact:(id)a0;
- (id)underlyingObject;
- (id)contentItem;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithCustomHandle:(id)a0;
- (id)initWithHandleString:(id)a0;
- (id)initWithHandleString:(id)a0 allowsCustomHandles:(BOOL)a1;
- (id)initWithMessageGroup:(id)a0;

@end
