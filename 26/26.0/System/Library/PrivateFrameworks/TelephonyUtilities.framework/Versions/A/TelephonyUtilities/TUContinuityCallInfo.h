@class NSString, NSDictionary, NSData;

@interface TUContinuityCallInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callIdentifier;
@property (readonly, nonatomic) NSString *callerIdSubstring;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isBranded;
@property (readonly, nonatomic) BOOL isEmergency;
@property (readonly, nonatomic) NSDictionary *contactIdentifiersByHandle;
@property (readonly, nonatomic) NSString *senderIdentityShortName;
@property (readonly, nonatomic) NSString *senderIdentityName;
@property (readonly, nonatomic) NSData *handlesHash;
@property (readonly, nonatomic) BOOL handlesBlocked;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallIdentifier:(id)a0 callerIdSubstring:(id)a1 displayName:(id)a2 isBranded:(BOOL)a3 isEmergency:(BOOL)a4 contactIdentifiersByHandle:(id)a5 senderIdentityShortName:(id)a6 senderIdentityName:(id)a7 handlesHash:(id)a8 handlesBlocked:(BOOL)a9;

@end
