@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)nickname;
- (id)middleName;
- (id)firstName;
- (id)wfSerializedRepresentation;
- (id)lastName;
- (id)formattedName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)wfName;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
