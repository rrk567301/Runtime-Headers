@class NSString, PKPassShare, NSData, PKSecureElementPass, PKSharingMessageDisplayInformation;

@interface PKPartialShareInvitation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKPassShare *share;
@property (readonly, nonatomic) PKSecureElementPass *pass;
@property (nonatomic) unsigned long long requestSource;
@property (readonly, nonatomic) NSData *homeInvite;
@property (readonly, nonatomic) PKSharingMessageDisplayInformation *displayInformation;
@property (retain, nonatomic) NSString *recipientNickname;
@property (retain, nonatomic) NSString *recipientHandle;
@property (readonly, nonatomic) char isHomeShare;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHomeInvite:(id)a0 displayInformation:(id)a1;
- (id)initWithShare:(id)a0 pass:(id)a1;
- (char)isEqualToPartialShareInvitation:(id)a0;

@end
