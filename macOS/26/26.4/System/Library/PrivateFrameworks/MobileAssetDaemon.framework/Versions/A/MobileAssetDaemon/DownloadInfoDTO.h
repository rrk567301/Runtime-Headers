@class NSString, NSURL;

@interface DownloadInfoDTO : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *taskDescriptor;
@property (retain, nonatomic) NSString *serviceTaskIdentifier;
@property (retain, nonatomic) NSString *nsurlsessionTaskId;
@property (retain, nonatomic) NSString *autoJobID;
@property (retain, nonatomic) NSURL *originalURL;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) BOOL allowsConstrainedAccess;
@property (nonatomic) double resourceTimeout;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) BOOL prefersInfraWifi;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
