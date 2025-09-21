@class NSArray;

@interface ATXDocumentPredictionResponse : ATXPredictionResponse

@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) NSArray *predictedDocumentIdentities;

- (void).cxx_destruct;
- (id)initWithDocuments:(id)a0;

@end
