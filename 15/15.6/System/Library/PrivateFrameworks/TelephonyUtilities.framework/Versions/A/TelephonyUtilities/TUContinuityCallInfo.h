@class NSString, NSDictionary, NSData;

@interface TUContinuityCallInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *callIdentifier;
@property (readonly, nonatomic) NSString *callerIdSubstring;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char isBranded;
@property (readonly, nonatomic) char isEmergency;
@property (readonly, nonatomic) NSDictionary *contactIdentifiersByHandle;
@property (readonly, nonatomic) NSString *senderIdentityShortName;
@property (readonly, nonatomic) NSString *senderIdentityName;
@property (readonly, nonatomic) NSData *handlesHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallIdentifier:(id)a0 callerIdSubstring:(id)a1 displayName:(id)a2 isBranded:(char)a3 isEmergency:(char)a4 contactIdentifiersByHandle:(id)a5 senderIdentityShortName:(id)a6 senderIdentityName:(id)a7 handlesHash:(id)a8;

@end
