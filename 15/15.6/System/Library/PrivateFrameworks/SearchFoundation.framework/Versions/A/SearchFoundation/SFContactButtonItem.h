@class NSString, NSArray, NSDictionary, SFPerson, NSData, SFButtonItemAppearance;

@interface SFContactButtonItem : SFButtonItem <SFContactButtonItem, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) SFPerson *person;
@property (copy, nonatomic) NSArray *actionTypesToShow;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
