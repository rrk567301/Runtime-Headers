@class NSURLRequest;

@interface BAURLDownload : BADownload

@property (retain) NSURLRequest *request;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)syncTo:(id)a0;
- (id)initWithIdentifier:(id)a0 request:(id)a1 applicationGroupIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 request:(id)a1 applicationGroupIdentifier:(id)a2 priority:(long long)a3;

@end
