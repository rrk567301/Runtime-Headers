@class NSString, NSArray;

@interface TUContactsDataProviderFetchRequest : NSObject

@property (readonly, nonatomic, getter=isEmergency) char emergency;
@property (readonly, nonatomic, getter=isBlocked) char blocked;
@property (readonly, nonatomic, getter=isConversation) char conversation;
@property (readonly, nonatomic, getter=isVerified) char verified;
@property (readonly, nonatomic, getter=isIncoming) char incoming;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSArray *auxiliaryKeysToFetch;
@property (copy, nonatomic) NSString *phoneNumberPrefixHint;
@property (nonatomic) char useNetworkCountryCode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (id)initWithHandles:(id)a0;
- (id)initWithHandles:(id)a0 isConversation:(char)a1;
- (id)initWithCall:(id)a0;
- (void)removePsuedHandles;

@end
