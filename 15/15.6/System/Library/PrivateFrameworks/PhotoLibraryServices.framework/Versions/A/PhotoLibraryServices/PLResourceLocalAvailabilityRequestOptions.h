@class NSString, CPLResourceTransferTaskOptions;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic) char wantsProgress;
@property (nonatomic, getter=isTransient) char transient;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (copy, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) char shouldPrioritize;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *downloadOptions;

- (id)init;
- (void).cxx_destruct;

@end
