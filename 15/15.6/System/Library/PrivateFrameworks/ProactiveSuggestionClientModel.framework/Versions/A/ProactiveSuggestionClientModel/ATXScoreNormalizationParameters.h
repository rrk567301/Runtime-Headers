@class NSNumber;

@interface ATXScoreNormalizationParameters : NSObject

@property (readonly, nonatomic) NSNumber *bufferSize;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBufferSize:(id)a0;
- (char)isEqualToATXScoreNormalizationParameters:(id)a0;

@end
