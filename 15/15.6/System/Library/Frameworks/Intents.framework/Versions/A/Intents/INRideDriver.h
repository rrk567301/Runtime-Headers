@class NSString;

@interface INRideDriver : INPerson <INImageProxyInjecting, INRideDriverExport, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *rating;
@property (readonly, copy) NSString *phoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)phoneNumber;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)_initWithUserInput:(id)a0 personHandle:(id)a1 nameComponents:(id)a2 displayName:(id)a3 image:(id)a4 contactIdentifier:(id)a5 customIdentifier:(id)a6 relationship:(id)a7 aliases:(id)a8 suggestionType:(long long)a9 isMe:(char)a10 scoredAlternatives:(id)a11 sourceAppBundleIdentifier:(id)a12 phonemeData:(id)a13;
- (id)_initWithUserInput:(id)a0 personHandle:(id)a1 nameComponents:(id)a2 displayName:(id)a3 image:(id)a4 contactIdentifier:(id)a5 rating:(id)a6 aliases:(id)a7;
- (id)_initWithUserInput:(id)a0 personHandle:(id)a1 nameComponents:(id)a2 displayName:(id)a3 image:(id)a4 contactIdentifier:(id)a5 rating:(id)a6 phoneNumber:(id)a7;
- (id)initWithHandle:(id)a0 displayName:(id)a1 image:(id)a2 rating:(id)a3 phoneNumber:(id)a4;
- (id)initWithHandle:(id)a0 nameComponents:(id)a1 image:(id)a2 rating:(id)a3 phoneNumber:(id)a4;
- (id)initWithPersonHandle:(id)a0 nameComponents:(id)a1 displayName:(id)a2 image:(id)a3 contactIdentifier:(id)a4 customIdentifier:(id)a5 isMe:(char)a6;
- (id)initWithPersonHandle:(id)a0 nameComponents:(id)a1 displayName:(id)a2 image:(id)a3 rating:(id)a4 phoneNumber:(id)a5;
- (id)initWithPhoneNumber:(id)a0 nameComponents:(id)a1 displayName:(id)a2 image:(id)a3 rating:(id)a4;

@end
