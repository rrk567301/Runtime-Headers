@class NSNumber, NSData;

@interface CHIPDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject

@property (retain, nonatomic) NSNumber *intent;
@property (retain, nonatomic) NSNumber *requestedProtocol;
@property (retain, nonatomic) NSData *transferFileDesignator;

- (id)init;
- (void).cxx_destruct;

@end
