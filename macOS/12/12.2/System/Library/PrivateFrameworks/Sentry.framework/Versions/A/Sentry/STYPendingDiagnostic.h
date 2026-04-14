@class NSURL;

@interface STYPendingDiagnostic : NSObject

@property (readonly) NSURL *diagnosticUploadRequestFile;
@property (nonatomic) unsigned long long taskIdentifier;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveMetadata:(id)a0;
- (id)initWithURL:(id)a0 uploadTaskIdentifier:(unsigned long long)a1;

@end
