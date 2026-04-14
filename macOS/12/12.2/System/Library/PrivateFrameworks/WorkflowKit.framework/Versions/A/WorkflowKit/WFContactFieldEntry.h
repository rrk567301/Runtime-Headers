@class WFEmailAddress, WFContact, NSString, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) WFContact *contact;
@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;
@property (readonly, nonatomic) WFEmailAddress *emailAddress;
@property (readonly, nonatomic) NSString *customHandle;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processingValueClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithContact:(id)a0;
- (id)underlyingObject;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithCustomHandle:(id)a0;
- (id)initWithHandleString:(id)a0;

@end
