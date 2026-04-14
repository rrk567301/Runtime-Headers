@class NSString, NSURL, NSError, NSDate;

@interface MADownloadOutcome : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *taskDescriptor;
@property (retain, nonatomic) NSString *serviceTaskIdentifier;
@property (retain, nonatomic) NSString *autoJobId;
@property (retain, nonatomic) NSString *nsurlSessionTaskID;
@property (retain, nonatomic) NSURL *originalURL;
@property (retain, nonatomic) NSURL *downloadedFileURL;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *resourceLastModifiedDate;
@property (nonatomic) long long httpStatusCode;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
