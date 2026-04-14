@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject

@property (readonly, nonatomic) id<_CNHandleStringClassificationStrategy> classificationStrategy;

+ (id)classificationOfHandleStrings:(id)a0;
+ (id)classificationOfHandleStrings:(id)a0 classificationQuality:(unsigned long long)a1;
+ (id)classificationStrategyForQuality:(unsigned long long)a0;

- (id)initWithClassificationQuality:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id)initWithClassificationStrategy:(id)a0;
- (unsigned long long)typeOfHandleString:(id)a0;
- (void)classifyHandleString:(id)a0 builder:(id)a1;
- (void).cxx_destruct;

@end
