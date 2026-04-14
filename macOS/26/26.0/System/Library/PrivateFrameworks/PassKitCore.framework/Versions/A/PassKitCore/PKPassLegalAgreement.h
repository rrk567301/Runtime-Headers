@class NSString;

@interface PKPassLegalAgreement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL agreementUpdated;
@property (nonatomic) BOOL removePassOnDecline;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initForDatabase;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 agreementUpdated:(BOOL)a2 removePassOnDecline:(BOOL)a3;

@end
