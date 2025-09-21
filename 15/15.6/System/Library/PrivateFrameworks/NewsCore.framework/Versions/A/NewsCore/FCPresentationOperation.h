@class NSString, NSNumber;

@interface FCPresentationOperation : NSObject

@property (copy, nonatomic) NSString *handlerUID;
@property (copy, nonatomic) NSString *operationUID;
@property (nonatomic) long long requiredAppLaunchCount;
@property (retain, nonatomic) NSNumber *maxPrecedingSameSessionPresentations;
@property (retain, nonatomic) NSNumber *maxPresentationAttempts;
@property (nonatomic) char endsPresentationSession;
@property (nonatomic) long long suppressOnLaunchConditions;
@property (nonatomic) char ignoreAfterSuccessfulPresentation;
@property (retain, nonatomic) NSNumber *maxRetries;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
