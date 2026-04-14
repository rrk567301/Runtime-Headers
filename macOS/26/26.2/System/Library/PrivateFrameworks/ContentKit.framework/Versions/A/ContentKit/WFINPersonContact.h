@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)lastName;
- (id)firstName;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)formattedName;
- (void).cxx_destruct;
- (id)nickname;
- (id)middleName;
- (id)wfSerializedRepresentation;
- (id)wfName;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
