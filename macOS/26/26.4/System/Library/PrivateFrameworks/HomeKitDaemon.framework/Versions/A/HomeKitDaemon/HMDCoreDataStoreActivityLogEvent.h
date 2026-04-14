@interface HMDCoreDataStoreActivityLogEvent : HMMLogEvent

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long storeType;

- (id)init;
- (id)initWithStartTime:(double)a0;
- (id)initWithEventType:(unsigned long long)a0 storeType:(unsigned long long)a1;

@end
