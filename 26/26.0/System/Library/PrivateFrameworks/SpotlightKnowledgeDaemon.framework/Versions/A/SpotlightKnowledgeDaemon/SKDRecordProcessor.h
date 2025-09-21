@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, SKDEventLogger;

@interface SKDRecordProcessor : NSObject <SKDRecordProcessor> {
    NSString *_name;
    NSString *_marker;
    _Atomic BOOL _is_suspended;
    _Atomic BOOL _is_enabled;
    NSObject<OS_dispatch_queue> *_queue;
    id<SKDEventLogger> _logger;
}

@property (readonly, nonatomic) id<SKDEventLogger> logger;
@property (readonly, nonatomic) NSString *marker;
@property (readonly, nonatomic) BOOL suspended;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *requiredAttributes;
@property (readonly, nonatomic) NSArray *optionalAttributes;
@property (readonly, nonatomic) NSArray *processedAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load;
- (void)setLogger:(id)a0;
- (void)suspend;
- (void)resume;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)fetchedAttributes;
- (id)processRecord:(id)a0 bundleID:(id)a1;
- (BOOL)willProcessRecord:(id)a0 bundleID:(id)a1;

@end
