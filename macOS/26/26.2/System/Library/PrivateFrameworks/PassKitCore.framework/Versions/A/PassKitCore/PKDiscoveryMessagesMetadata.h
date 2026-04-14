@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSURL *messagesBundleURL;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
