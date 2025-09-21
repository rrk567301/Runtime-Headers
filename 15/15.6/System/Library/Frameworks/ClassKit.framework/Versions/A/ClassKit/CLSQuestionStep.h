@class NSString, CLSAnswerFormat, NSArray;

@interface CLSQuestionStep : CLSSurveyStep <CLSRelationable, CLSMutableAssetAdopter> {
    NSString *_questionText;
    long long _displayOrder;
    long long _questionType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long questionType;
@property (copy, nonatomic) NSString *questionText;
@property (retain, nonatomic) CLSAnswerFormat *answerFormat;
@property (nonatomic) long long displayOrder;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAsset:(id)a0;
- (char)assetsEqual:(id)a0;
- (id)initWithQuestionText:(id)a0 answerFormat:(id)a1;
- (void)mergeWithObject:(id)a0;
- (void)removeAsset:(id)a0;

@end
