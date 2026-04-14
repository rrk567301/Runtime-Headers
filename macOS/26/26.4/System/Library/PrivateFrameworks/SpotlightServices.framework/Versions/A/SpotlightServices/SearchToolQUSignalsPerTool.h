@class NSString, NSSet, NSArray, NSDictionary, NSDate;

@interface SearchToolQUSignalsPerTool : NSObject

@property (retain, nonatomic) NSString *parsedQueryFromQU;
@property (nonatomic) BOOL earliestTokenFromQU;
@property (nonatomic) BOOL latestTokenFromQU;
@property (nonatomic) BOOL hasQueryTextEmbedding;
@property (nonatomic) BOOL hasSearchTerm;
@property (nonatomic) BOOL hasOneOnOneSearchTerm;
@property (retain, nonatomic) NSString *locationFromQU;
@property (retain, nonatomic) NSSet *rawSearchTermsFromLLMQU;
@property (retain, nonatomic) NSArray *parsedArgSearchTermsFromQU;
@property (retain, nonatomic) NSArray *normalizedPersonFromQU;
@property (retain, nonatomic) NSArray *normalizedSearchTermsFromQU;
@property (retain, nonatomic) NSArray *normalizedSearchTermsPersonFromQU;
@property (retain, nonatomic) NSString *parsedArgLocationTermsFromQU;
@property (nonatomic) BOOL orderByTimeAscending;
@property (nonatomic) BOOL orderByTimeDescending;
@property (retain, nonatomic) NSSet *uniquePersonsFromLLMQU;
@property (retain, nonatomic) NSSet *personTokensFromLLMQU;
@property (retain, nonatomic) NSSet *personSenderTokensFromLLMQU;
@property (retain, nonatomic) NSSet *personReceiverTokensFromLLMQU;
@property (nonatomic) BOOL hasPersonIsSelfTokenFromLLMQU;
@property (retain, nonatomic) NSDictionary *detailedLLMQUTokens;
@property (retain, nonatomic) NSString *departureLocationFromQU;
@property (retain, nonatomic) NSString *arrivalLocationFromQU;
@property (retain, nonatomic) NSDate *queryDateStringStartDate;
@property (retain, nonatomic) NSDate *queryDateStringEndDate;
@property (retain, nonatomic) NSDictionary *dcQUArgumentsTokenCount;
@property (retain, nonatomic) NSDictionary *dcECRMappedPersonArgumentsTokenCount;
@property (nonatomic) BOOL dcRelationshipInECR;

- (void).cxx_destruct;

@end
