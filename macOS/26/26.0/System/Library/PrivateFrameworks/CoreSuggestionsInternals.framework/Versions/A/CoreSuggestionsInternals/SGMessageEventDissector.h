@class NSString, _PASLock, NSDictionary;

@interface SGMessageEventDissector : SGPipelineDissector <SGTextMessageProcessing> {
    _PASLock *_lock;
    NSDictionary *_dissectorConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)mobileAssetsEnabled;
+ (id)describeCategory:(unsigned char)a0;
+ (BOOL)featureEnabled;
+ (id)tupleWithEntity:(id)a0 label:(id)a1;
+ (id)getFlightInformationForFlightEventData:(id)a0;
+ (id)loadEventClassifierModelFromPath:(id)a0;
+ (unsigned char)messageEventCategoryForCategoryString:(id)a0;
+ (BOOL)allowMessageEventDissector;
+ (id)loadLazyPlistWithBasename:(id)a0;
+ (id)dateFromString:(id)a0;
+ (id)enrichmentsFromSchema:(id)a0 forMessage:(id)a1 forEntity:(id)a2 category:(id)a3;
+ (id)schemaOrgAndMissingEntitiesForExtractedEvent:(id)a0;
+ (void)logMLMessageEventExtractionInteractions:(id)a0 context:(id)a1;
+ (id)fallbackSchemaForGenericEventWithTitle:(id)a0 startDate:(id)a1 endDate:(id)a2;
+ (id)nilEntities:(id)a0;

- (id)_init;
- (id)eventExtractionMobileAssetsPath;
- (void)addEnrichmentForEvents:(id)a0 toEntity:(id)a1 message:(id)a2 context:(id)a3 timingProcessingInMs:(unsigned long long)a4;
- (BOOL)shouldProcessTextMessage:(id)a0 entity:(id)a1;
- (void)logMLMessageEventExtractionForSchema:(id)a0 message:(id)a1 category:(id)a2 timingProcessingInMs:(unsigned long long)a3;
- (id)eventsFromMessage:(id)a0 eventExtractionAssetsPath:(id)a1;
- (id)eventClassifierMobileAssetsPath;
- (void)logFailedEventExtractionForMessage:(id)a0 failureCode:(long long)a1;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (BOOL)isDissectorProcessingWithinRateLimit;
- (void)logFailedEventExtractionForMessage:(id)a0 category:(id)a1 missingEntities:(id)a2 timingProcessingInMs:(unsigned long long)a3;
- (BOOL)isMessageOfTypeEvent:(id)a0;
- (id)loadEventClassifierModel;
- (id)schemaOrgAndMissingEntitiesForMessage:(id)a0 withMLModelParameters:(id)a1;
- (void).cxx_destruct;

@end
