@class NSString, NSDictionary, NSData;

@interface TUContinuityCallInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callIdentifier;
@property (readonly, nonatomic) NSString *callerIdSubstring;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isBranded;
@property (readonly, nonatomic) NSDictionary *contactIdentifiersByHandle;
@property (readonly, nonatomic) NSString *senderIdentityShortName;
@property (readonly, nonatomic) NSString *senderIdentityName;
@property (readonly, nonatomic) NSData *handlesHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallIdentifier:(id)a0 callerIdSubstring:(id)a1 displayName:(id)a2 isBranded:(BOOL)a3 contactIdentifiersByHandle:(id)a4 senderIdentityShortName:(id)a5 senderIdentityName:(id)a6 handlesHash:(id)a7;

@end
