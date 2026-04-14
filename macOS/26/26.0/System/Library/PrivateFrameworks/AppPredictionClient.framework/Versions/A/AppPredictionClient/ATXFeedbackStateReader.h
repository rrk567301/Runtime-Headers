@class NSString, NSData;

@interface ATXFeedbackStateReader : NSObject {
    NSData *_data;
    const char *_perPredictionDataStart;
    int _predictionCount;
    Class _predictedItemKeyClass;
}

@property (readonly, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) long long assetVersion;

+ (id)stringKeyWithData:(id)a0;
+ (id)numberKeyWithData:(id)a0;

- (id)initWithData:(id)a0 predictedItemKeyClass:(Class)a1;
- (id)init;
- (void)enumerateApps:(id /* block */)a0;
- (void).cxx_destruct;

@end
