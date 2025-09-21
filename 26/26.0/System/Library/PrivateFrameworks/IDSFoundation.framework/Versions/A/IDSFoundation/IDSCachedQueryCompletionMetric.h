@class NSString, NSDictionary;

@interface IDSCachedQueryCompletionMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned int queryURITypes;
@property (readonly, nonatomic) BOOL hasCachedResult;
@property (readonly, nonatomic) NSString *queryReason;
@property (readonly, nonatomic) unsigned long long uriCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 queryURITypes:(unsigned int)a1 queryReason:(id)a2 uriCount:(unsigned long long)a3;

@end
