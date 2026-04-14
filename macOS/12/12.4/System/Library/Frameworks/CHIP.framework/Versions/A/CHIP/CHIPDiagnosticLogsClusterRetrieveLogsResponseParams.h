@class NSNumber, NSData;

@interface CHIPDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSData *content;
@property (retain, nonatomic) NSNumber *timeStamp;
@property (retain, nonatomic) NSNumber *timeSinceBoot;

- (id)init;
- (void).cxx_destruct;

@end
