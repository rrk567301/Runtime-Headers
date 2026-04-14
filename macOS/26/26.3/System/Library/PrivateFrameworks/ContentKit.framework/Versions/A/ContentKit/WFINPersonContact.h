@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)middleName;
- (id)nickname;
- (id)firstName;
- (id)lastName;
- (id)wfName;
- (id)formattedName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
