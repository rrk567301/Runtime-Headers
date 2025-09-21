@class NSString, VCSandboxedURL;
@protocol AVCMediaRecorderRequestDelegate;

@interface AVCMomentsRequest : NSObject {
    id _weakDelegate;
    unsigned char _mode;
    VCSandboxedURL *_directoryURL;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _movieFragmentInterval;
}

@property (weak, nonatomic) id<AVCMediaRecorderRequestDelegate> delegate;
@property (readonly, nonatomic) char hasDirectoryURL;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) unsigned char mediaType;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) NSString *requesteeID;

+ (id)invalidDelegateInstanceError;

- (void)dealloc;
- (id)description;
- (id)serialize;
- (char)validateWithError:(id *)a0;
- (char)startWithError:(id *)a0;
- (char)rejectWithError:(id *)a0;
- (char)endWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 requesterID:(id)a1;
- (id)initWithConfiguration:(id)a0 requesterID:(id)a1 transactionID:(id)a2;
- (char)setUpDirectoryURLWithConfiguration:(id)a0;
- (char)setUpMovieFragmentIntervalWithConfiguration:(id)a0;

@end
