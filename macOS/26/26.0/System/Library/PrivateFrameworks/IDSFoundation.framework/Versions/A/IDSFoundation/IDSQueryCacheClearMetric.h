@class NSString, NSDictionary;

@interface IDSQueryCacheClearMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSString *clearReason;
@property (readonly, nonatomic) unsigned long long uriCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0 clearReason:(id)a1 uriCount:(unsigned long long)a2;

@end
