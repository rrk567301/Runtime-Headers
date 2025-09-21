@class NSArray, NSDictionary, NSData, NSError;

@interface IDSKTOptInResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSData *serverProvidedSMT;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *optedInOutURIs;
@property (readonly, nonatomic) NSDictionary *serverSMTByURI;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 optedInOutURIs:(id)a1 serverSMTByURI:(id)a2 error:(id)a3;
- (id)initWithSuccess:(char)a0 serverProvidedSMT:(id)a1 error:(id)a2;

@end
