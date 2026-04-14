@class NSData;

@interface ATXAppPredictorPredictionChunks : NSObject

@property (retain, nonatomic) NSData *predictionSetChunk;
@property (retain, nonatomic) NSData *feedbackStateChunk;

- (id)joinChunks;
- (void).cxx_destruct;
- (id)chunkArray;
- (id)init;
- (id)initWithPredictionSetChunk:(id)a0 feedbackStateChunk:(id)a1;

@end
