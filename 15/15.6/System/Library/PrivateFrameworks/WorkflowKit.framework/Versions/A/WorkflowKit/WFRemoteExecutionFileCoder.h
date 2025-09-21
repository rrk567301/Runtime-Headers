@class NSString, WFRemoteExecutionCoordinator, NSURL, NSMutableArray;

@interface WFRemoteExecutionFileCoder : WFFileCoder

@property (retain, nonatomic) NSMutableArray *transferIdentifiers;
@property (copy, nonatomic) id /* block */ fileAvailabilityHandler;
@property (weak, nonatomic) WFRemoteExecutionCoordinator *coordinator;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSURL *fileURL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)targetPlatform;
- (void)archiveFileAtURL:(id)a0 fileShouldBeDeletedOnDeallocation:(char)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileShouldBeDeletedOnDeallocation:(char *)a1 fileIsSecurityScoped:(char *)a2;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)cancelOutstandingTransfers;
- (void)fileAvailabilityChanged;
- (id)initWithCoordinator:(id)a0 requestIdentifier:(id)a1;

@end
