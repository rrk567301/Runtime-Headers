@class NSString, CNContact;

@interface PXCNAutocompleteConcreteResult : NSObject <PXRecipientSearchResult>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *addressLabel;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) long long recipientKind;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char canBeDisclosed;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 address:(id)a1 addressLabel:(id)a2 contact:(id)a3 recipientKind:(long long)a4 isValid:(char)a5 canBeDisclosed:(char)a6 resultType:(long long)a7;
- (id)resultWithChangingIsValid:(char)a0;

@end
