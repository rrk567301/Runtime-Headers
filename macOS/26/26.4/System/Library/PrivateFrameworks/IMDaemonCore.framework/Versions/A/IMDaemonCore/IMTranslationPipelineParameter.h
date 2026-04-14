@class NSString, NSArray;

@interface IMTranslationPipelineParameter : NSObject <IMTranslationProcessingParameter>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *sourceLocaleIdentifier;
@property (copy, nonatomic) NSString *destinationLocaleIdentifier;
@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (id)initWithDefusedMessage:(id)a0;

@end
