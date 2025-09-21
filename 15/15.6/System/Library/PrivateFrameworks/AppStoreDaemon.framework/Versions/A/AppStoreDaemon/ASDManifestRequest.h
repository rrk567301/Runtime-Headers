@class NSArray, NSDictionary, NSURL, NSUUID;

@interface ASDManifestRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDictionary *manifest;
@property (retain) NSURL *manifestURL;
@property long long archiveType;
@property (retain) NSArray *certificates;
@property char pinningRevocationCheckRequired;
@property (retain) NSUUID *requestIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
