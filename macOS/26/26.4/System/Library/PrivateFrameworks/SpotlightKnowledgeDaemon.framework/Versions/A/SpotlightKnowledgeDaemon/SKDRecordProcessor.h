@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, SKDEventLogger, SKDDefaultsProviding;

@interface SKDRecordProcessor : NSObject <SKDRecordProcessor> {
    NSString *_name;
    NSString *_marker;
    _Atomic BOOL _is_suspended;
    _Atomic BOOL _is_enabled;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _evaluator_lock;
    struct __MDSimpleQueryEvaluator { } *_evaluator;
    id<SKDEventLogger> _logger;
}

@property (readonly, nonatomic) id<SKDEventLogger> logger;
@property (readonly, nonatomic) struct __MDSimpleQueryEvaluator { } *evaluator;
@property (readonly, nonatomic) id<SKDDefaultsProviding> defaults;
@property (readonly, nonatomic) NSString *marker;
@property (readonly, nonatomic) BOOL suspended;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *unsupportedQuery;
@property (readonly, nonatomic) NSArray *requiredAttributes;
@property (readonly, nonatomic) NSArray *optionalAttributes;
@property (readonly, nonatomic) NSArray *processedAttributes;
@property (readonly, nonatomic) NSArray *requiredBundles;
@property (readonly, nonatomic) NSArray *excludedBundles;
@property (readonly, nonatomic) NSArray *requiredContentTypes;
@property (readonly, nonatomic) NSArray *excludedContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void)unload;
- (void)load;
- (void)suspend;
- (void).cxx_destruct;
- (void)setLogger:(id)a0;
- (void)dealloc;
- (id)textFromRecord:(id)a0;
- (id)composedValueFromRecord:(id)a0 key:(id)a1 delimiter:(id)a2;
- (void)enumerateValidRecordsForRecords:(id)a0 usingBlock:(id /* block */)a1;
- (id)fetchedAttributes;
- (id)initWithDefaultsProvider:(id)a0 logger:(id)a1;
- (id)initWithName:(id)a0 defaultsProvider:(id)a1 logger:(id)a2;
- (BOOL)isCJK:(id)a0;
- (id)processRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;
- (void)processRecords:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportedRecord:(id)a0;
- (id)titleFromRecord:(id)a0;
- (BOOL)validRecord:(id)a0;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1 indexType:(unsigned int)a2;

@end
