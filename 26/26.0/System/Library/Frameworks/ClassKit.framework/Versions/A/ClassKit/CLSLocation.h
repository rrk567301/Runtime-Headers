@class NSString, NSPersonNameComponents;

@interface CLSLocation : CLSObject <CLSContactsSearchable>

@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) long long sourceType;
@property BOOL isEditable;
@property (readonly) NSString *displayName;
@property (readonly) NSPersonNameComponents *nameComponents;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocationID:(id)a0 name:(id)a1;

@end
