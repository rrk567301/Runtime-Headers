@class NSData, NSArray, NSString;

@interface CPSSharingRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *requestData;
@property (copy, nonatomic) NSArray *customSharingMethods;
@property (copy, nonatomic) NSString *customTitleText;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;

@end
