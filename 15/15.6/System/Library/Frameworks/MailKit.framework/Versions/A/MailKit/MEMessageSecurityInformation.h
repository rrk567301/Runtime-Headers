@class NSString, NSArray, NSError;

@interface MEMessageSecurityInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *decoderID;
@property (readonly, nonatomic) char disallowUsersToLoadRemoteContent;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly, nonatomic) char isEncrypted;
@property (readonly, nonatomic) NSError *signingError;
@property (readonly, nonatomic) NSError *encryptionError;
@property (readonly, nonatomic) char shouldBlockRemoteContent;
@property (readonly, nonatomic) NSString *localizedRemoteContentBlockingReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSigners:(id)a0 isEncrypted:(char)a1 signingError:(id)a2 encryptionError:(id)a3;
- (id)initWithSigners:(id)a0 isEncrypted:(char)a1 signingError:(id)a2 encryptionError:(id)a3 shouldBlockRemoteContent:(char)a4 disallowUsersToLoadRemoteContent:(char)a5 localizedRemoteContentBlockingReason:(id)a6;
- (id)initWithSigners:(id)a0 isEncrypted:(char)a1 signingError:(id)a2 encryptionError:(id)a3 shouldBlockRemoteContent:(char)a4 localizedRemoteContentBlockingReason:(id)a5;

@end
