@class NSString, NSURL;

@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *oneTimeRemoveAuthToken;
@property (copy) NSURL *serverURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserName:(id)a0 dsid:(id)a1 oneTimeRemoveAuthToken:(id)a2 serverURL:(id)a3;

@end
