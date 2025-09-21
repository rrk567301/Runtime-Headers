@class NSString, NSArrayController, NSDate;

@interface MCActivityAggregate : NSObject {
    NSArrayController *_monitorController;
    unsigned long long _baseItemsDone;
    unsigned long long _baseItemsTotal;
    double _baseUnifiedDone;
    char _canCancel;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    double _unifiedDone;
    double _progress;
    char _isProgressing;
    double _estimatedTimeRemaining;
}

@property (nonatomic) char canCancel;
@property unsigned long long itemsDone;
@property unsigned long long itemsTotal;
@property double unifiedDone;
@property (nonatomic) double progress;
@property (nonatomic) char isProgressing;
@property (nonatomic) double estimatedTimeRemaining;
@property (retain) NSDate *lastUpdateTimestamp;
@property char isResetting;
@property (nonatomic) double startTime;
@property long long activityType;
@property (readonly, nonatomic) NSArrayController *monitorController;
@property (readonly, nonatomic) char isProgressIndeterminate;
@property (copy) NSString *nameSingular;
@property (copy) NSString *namePlural;
@property (copy) NSString *status;
@property (copy) NSString *bkItemDescription;

+ (char)automaticallyNotifiesObserversOfCanCancel;
+ (char)automaticallyNotifiesObserversOfEstimatedTimeRemaining;
+ (char)automaticallyNotifiesObserversOfIsProgressing;
+ (char)automaticallyNotifiesObserversOfProgress;
+ (id)keyPathsForValuesAffectingIsProgressIndeterminate;
+ (double)updateDelay;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)currentItem;
- (void)_updateStatus;
- (void)addActivityMonitor:(id)a0;
- (void)removeActivityMonitor:(id)a0;
- (void)updateUnitBasedValues;
- (void)_processMonitorUpdate;
- (void)_updateAggregateIsProgressing;
- (void)_updateAggregateValues;
- (void)_updateTimeBasedValues;
- (void)signalCancel:(id)a0;

@end
