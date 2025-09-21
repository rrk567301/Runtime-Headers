@class NSString, NSNumber;

@interface FCPresentationOperation : NSObject

@property (copy, nonatomic) NSString *handlerUID;
@property (copy, nonatomic) NSString *operationUID;
@property (nonatomic) long long requiredAppLaunchCount;
@property (retain, nonatomic) NSNumber *maxPrecedingSameSessionPresentations;
@property (retain, nonatomic) NSNumber *maxPresentationAttempts;
@property (nonatomic) BOOL endsPresentationSession;
@property (nonatomic) long long suppressOnLaunchConditions;
@property (nonatomic) BOOL ignoreAfterSuccessfulPresentation;
@property (retain, nonatomic) NSNumber *maxRetries;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
