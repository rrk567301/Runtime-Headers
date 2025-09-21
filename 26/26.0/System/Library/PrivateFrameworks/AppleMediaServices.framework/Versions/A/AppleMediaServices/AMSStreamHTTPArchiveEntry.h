@class NSArray, NSString;

@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *entries;
@property (retain) NSString *urlString;

+ (id)_createEntriesForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;

- (id)initWithEntries:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;
- (id)initWithHTTPArchiveTaskInfo:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
