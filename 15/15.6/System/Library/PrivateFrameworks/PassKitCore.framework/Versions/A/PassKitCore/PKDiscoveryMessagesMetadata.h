@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSURL *messagesBundleURL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
