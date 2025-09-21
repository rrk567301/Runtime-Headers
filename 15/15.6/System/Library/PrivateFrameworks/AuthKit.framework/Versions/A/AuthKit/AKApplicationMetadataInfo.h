@class NSString, NSDictionary;

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *authorizedAppListVersion;
@property (readonly, copy, nonatomic) NSDictionary *teams;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseInfo:(id)a0;

@end
