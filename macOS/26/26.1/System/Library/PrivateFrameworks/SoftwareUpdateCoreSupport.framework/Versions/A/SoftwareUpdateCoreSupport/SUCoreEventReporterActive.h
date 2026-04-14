@class NSURL;

@interface SUCoreEventReporterActive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *serverURL;
@property (nonatomic) long long attemptedSendCount;
@property (nonatomic) long long failedSendCount;
@property (nonatomic) long long discoveredRunningCount;
@property (nonatomic) long long discoveredSuspendedCount;
@property (nonatomic) long long discoveredCancelingCount;

- (id)copy;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initFromArchivedData:(id)a0;
- (id)initWithServerURL:(id)a0;
- (id)toArchivedData;

@end
