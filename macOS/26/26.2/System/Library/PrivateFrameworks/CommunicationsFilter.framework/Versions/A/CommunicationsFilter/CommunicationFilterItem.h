@class NSString;

@interface CommunicationFilterItem : NSObject <NSCopying>

@property (readonly, nonatomic) struct __CFPhoneNumber { } *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *unformattedID;

- (BOOL)isPhoneNumber;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { } *)a0;
- (BOOL)_acceptVersion:(id)a0;
- (BOOL)_acceptItemType:(id)a0;
- (id)_dictionaryRepresentationWithRedaction;
- (BOOL)isEmailAddress;
- (BOOL)matchesFilterItem:(id)a0;

@end
