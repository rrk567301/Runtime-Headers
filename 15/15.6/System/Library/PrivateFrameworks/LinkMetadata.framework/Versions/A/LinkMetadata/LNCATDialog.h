@class NSString, NSDictionary, NSData, NSURL;

@interface LNCATDialog : LNDialog <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *securityScopeData;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *templateDirectoryURL;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 templateDirectoryURL:(id)a1 parameters:(id)a2 localeIdentifier:(id)a3;

@end
