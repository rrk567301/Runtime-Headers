@class NSData, NSDictionary, NSURL, NSError, NSNumber, NSObject;
@protocol OS_nw_path, OS_nw_resolution_report;

@interface NWURLError : NSError

@property (class, readonly, nonatomic) NSDictionary *allUserInfoKeys;

@property (retain, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) NSURL *failingURL;
@property (retain, nonatomic) struct __SecTrust { } *peerTrust;
@property (retain, nonatomic) NSNumber *networkUnavailableReason;
@property (retain, nonatomic) NSNumber *backgroundTaskCancelledReason;
@property (retain, nonatomic) NSNumber *webSocketHandshakeFailureReason;
@property (retain, nonatomic) NSNumber *privacyProxyFailure;
@property (retain, nonatomic) NSNumber *vpnInactiveFailure;
@property (retain, nonatomic) NSNumber *blockedTrackerFailure;
@property (retain, nonatomic) NSObject<OS_nw_path> *path;
@property (retain, nonatomic) NSObject<OS_nw_resolution_report> *resolutionReport;
@property (retain, nonatomic) NSData *downloadTaskResumeData;
@property (retain, nonatomic) NSData *uploadTaskResumeData;

+ (BOOL)supportsSecureCoding;

- (id)localizedDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)userInfo;
- (void).cxx_destruct;
- (id)localizedFailureReason;
- (id)localizedRecoverySuggestion;
- (void)fillErrorForLoader:(id)a0 andTask:(id)a1;
- (id)initWithErrorCode:(long long)a0;
- (long long)translateCodeForError:(id)a0;
- (long long)translateDNSError:(int)a0;
- (long long)translatePOSIXError:(int)a0;
- (long long)translateTLSError:(int)a0;

@end
