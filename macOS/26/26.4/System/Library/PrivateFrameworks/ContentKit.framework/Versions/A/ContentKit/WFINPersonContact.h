@class INPerson;

@interface WFINPersonContact : WFContact

@property (retain, nonatomic) INPerson *person;

+ (BOOL)supportsSecureCoding;
+ (id)contactWithPerson:(id)a0;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)middleName;
- (id)nickname;
- (id)lastName;
- (id)firstName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (id)initWithCoder:(id)a0;
- (id)formattedName;
- (id)initWithINPerson:(id)a0;
- (id)INPersonRepresentation;

@end
