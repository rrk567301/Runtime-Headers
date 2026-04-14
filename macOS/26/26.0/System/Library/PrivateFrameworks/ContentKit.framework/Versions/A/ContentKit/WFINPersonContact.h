@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)middleName;
- (id)firstName;
- (id)lastName;
- (id)nickname;
- (id)wfSerializedRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)wfName;
- (id)initWithCoder:(id)a0;
- (id)formattedName;
- (void).cxx_destruct;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
