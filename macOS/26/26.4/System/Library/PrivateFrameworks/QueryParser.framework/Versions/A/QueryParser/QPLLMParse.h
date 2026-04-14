@class NSString, NSDictionary, NSArray, NSNumber;

@interface QPLLMParse : NSObject

@property (retain, nonatomic) NSDictionary *encodedDict;
@property (retain, nonatomic) NSString *intentLabel;
@property (retain, nonatomic) NSNumber *intentLabelId;
@property (retain, nonatomic) NSArray *tokenArguments;
@property (retain, nonatomic) NSNumber *isPQA;

- (void).cxx_destruct;
- (id)getEncodedData;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1;
- (id)initWithIntentLabel:(id)a0 tokenArguments:(id)a1 isPQA:(BOOL)a2;
- (id)getIsPQA;
- (id)getTokenArguments;

@end
