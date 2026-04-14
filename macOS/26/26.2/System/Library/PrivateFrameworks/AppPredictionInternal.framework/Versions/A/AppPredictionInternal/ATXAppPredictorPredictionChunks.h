@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (void).cxx_destruct;
- (id)chunkArray;
- (id)joinChunks;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;
- (id)init;

@end
