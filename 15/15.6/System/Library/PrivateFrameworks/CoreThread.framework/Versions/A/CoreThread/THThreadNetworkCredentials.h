@class NSData, NSString, THThreadNetworkCredentialsDataSet;

@interface THThreadNetworkCredentials : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *masterKey;
@property (copy, nonatomic) NSString *passPhrase;
@property (copy, nonatomic) NSData *PSKc;
@property (nonatomic) unsigned char channel;
@property (copy, nonatomic) NSData *PANID;
@property (copy, nonatomic) NSString *userInfo;
@property (retain, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (nonatomic) char isActiveDevice;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMasterKey:(id)a0 passPhrase:(id)a1 PSKc:(id)a2 channel:(unsigned char)a3 PANID:(id)a4 userInfo:(id)a5;
- (id)initWithMasterKey:(id)a0 passPhrase:(id)a1 PSKc:(id)a2 channel:(unsigned char)a3 PANID:(id)a4 userInfo:(id)a5 credentialDataSet:(id)a6 isActiveDevice:(char)a7;

@end
