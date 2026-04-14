@class NSArray, NSDictionary, MTCallerSuppliedFields, NSMutableDictionary, MTPromise, NSMutableArray;

@interface MTMetricsData : MTObject

@property (retain) NSArray *registeredEventData;
@property (retain) NSDictionary *baseFields;
@property (retain) NSArray *additionalBaseData;
@property (retain) NSDictionary *eventSpecificFields;
@property (retain) NSArray *additionalEventData;
@property (retain) MTPromise *configBaseFields;
@property (retain) MTCallerSuppliedFields *callerSuppliedFields;
@property (retain) NSMutableArray *additionalData;
@property (retain) NSMutableDictionary *performanceData;
@property (retain) NSMutableArray *postProcessingBlocks;
@property BOOL samplingEnabled;
@property (getter=isAnonymous, setter=setAnonymous:) BOOL anonymous;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)addFields:(id)a0;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;
- (id)getAdditionalData;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (id)getPostProcessingBlocks;
- (void)addPostProcessingBlocks:(id)a0;
- (id)composeFieldsMaps;
- (id)userAndClientIDFields;
- (void)cancelUnfinishedPromisedEventData;
- (id)recordEvent;

@end
