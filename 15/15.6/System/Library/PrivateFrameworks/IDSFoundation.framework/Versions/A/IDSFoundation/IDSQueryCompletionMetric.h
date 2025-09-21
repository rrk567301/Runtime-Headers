@class NSString, NSError, NSDictionary;

@interface IDSQueryCompletionMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) double queryTimeInterval;
@property (readonly, nonatomic) unsigned int queryURITypes;
@property (readonly, nonatomic) unsigned int conferenceResultCode;
@property (readonly, nonatomic) unsigned int queryErrorType;
@property (readonly, nonatomic) NSError *queryError;
@property (readonly, nonatomic) char wasReversePushAttempted;
@property (readonly, nonatomic) char hasEmptyResult;
@property (readonly, nonatomic) NSString *queryReason;
@property (readonly, nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) unsigned long long uriCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 querySuccess:(char)a1 connectionType:(unsigned int)a2 queryTimeInterval:(double)a3 queryURITypes:(unsigned int)a4 conferenceResultCode:(unsigned int)a5 queryErrorType:(unsigned int)a6 queryError:(id)a7 wasReversePushAttempted:(char)a8 hasEmptyResult:(char)a9 queryReason:(id)a10 retryCount:(unsigned long long)a11 uriCount:(unsigned long long)a12;

@end
