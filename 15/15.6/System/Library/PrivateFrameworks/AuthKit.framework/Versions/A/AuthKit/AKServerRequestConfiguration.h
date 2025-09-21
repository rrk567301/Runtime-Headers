@class NSURLRequest, AKAppleIDServerResourceLoadDelegate, NSArray;

@interface AKServerRequestConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) AKAppleIDServerResourceLoadDelegate *resourceLoadDelegate;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) unsigned long long presentationType;
@property (copy, nonatomic) NSArray *whitelistedPathURLs;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequest:(id)a0 requestType:(unsigned long long)a1;

@end
