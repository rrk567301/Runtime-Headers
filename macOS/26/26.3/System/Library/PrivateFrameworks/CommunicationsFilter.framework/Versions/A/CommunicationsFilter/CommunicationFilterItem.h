@class NSString;

@interface CommunicationFilterItem : NSObject <NSCopying>

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPhoneNumber;
- (unsigned long long)hash;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (BOOL)_acceptVersion:(id)a0;
- (BOOL)_acceptItemType:(id)a0;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)isEmailAddress;
- (BOOL)matchesFilterItem:(id)a0;

@end
