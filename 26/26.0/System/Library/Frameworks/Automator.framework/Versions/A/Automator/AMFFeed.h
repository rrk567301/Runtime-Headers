@class NSURL, AMFFeedMetadata, NSArray;

@interface AMFFeed : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *url;
@property (retain) AMFFeedMetadata *metadata;
@property (copy) NSArray *entries;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 metadata:(id)a1;

@end
