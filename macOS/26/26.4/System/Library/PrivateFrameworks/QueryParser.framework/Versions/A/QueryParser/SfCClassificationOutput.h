@class NSNumber, NSArray, NSString;

@interface SfCClassificationOutput : NSObject <QCClassificationOutput>

@property (readonly, nonatomic) NSNumber *confidence;
@property (readonly, nonatomic) NSNumber *classificationId;
@property (readonly, nonatomic) NSArray *argIds;
@property (readonly, nonatomic) NSArray *argScores;
@property (readonly, nonatomic) unsigned long long predictionTime;
@property (readonly, nonatomic) unsigned long long embeddingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOutput:(id)a0;

@end
