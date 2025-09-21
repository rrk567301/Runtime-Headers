@class NSArray, NSDictionary, NSURL, NSUUID;

@interface ASDManifestRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *manifest;
@property (retain) NSURL *manifestURL;
@property long long archiveType;
@property (retain) NSArray *certificates;
@property BOOL pinningRevocationCheckRequired;
@property (retain) NSUUID *requestIdentifier;
@property long long softwarePlatform;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
