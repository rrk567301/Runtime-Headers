@class NSString;

@interface CommunicationFilterItem : NSObject

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (char)_acceptVersion:(id)a0;
- (char)_acceptItemType:(id)a0;
- (id)_dictionaryRepresentationWithRedaction;
- (char)isPhoneNumber;
- (char)matchesFilterItem:(id)a0;

@end
