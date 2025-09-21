@class NSString, NSURL;

@interface PKUserLegalAgreementConsent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *passUniqueID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSURL *agreementUrl;
@property (nonatomic) BOOL userConsented;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 passUniqueID:(id)a1 type:(unsigned long long)a2 name:(id)a3 version:(id)a4 agreementUrl:(id)a5;
- (id)_initForDatabase;

@end
