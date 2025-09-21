@class NSDictionary, NSString;

@interface POUserLoginConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDictionary *customAssertionRequestHeaderClaims;
@property (retain) NSDictionary *customAssertionRequestBodyClaims;
@property (retain) NSDictionary *customLoginRequestHeaderClaims;
@property (retain) NSDictionary *customLoginRequestBodyClaims;
@property (copy, nonatomic) NSString *loginUserName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dataRepresentation;
- (id)initWithLoginUserName:(id)a0;
- (char)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (id)dataRepresentationForDisplay:(char)a0;
- (id)dictionaryRepresentationForDisplay:(char)a0;

@end
