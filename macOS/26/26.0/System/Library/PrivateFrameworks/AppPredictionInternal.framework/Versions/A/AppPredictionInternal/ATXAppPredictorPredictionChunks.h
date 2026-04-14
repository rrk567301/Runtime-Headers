@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)joinChunks;
- (id)init;
- (id)chunkArray;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;
- (void).cxx_destruct;

@end
