@class NSString, NSArrayController, NSDate;

@interface MCActivityAggregate : NSObject {
    NSArrayController *_monitorController;
    unsigned long long _baseItemsDone;
    unsigned long long _baseItemsTotal;
    double _baseUnifiedDone;
    BOOL _canCancel;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    double _unifiedDone;
    double _progress;
    BOOL _isProgressing;
    double _estimatedTimeRemaining;
}

@property (nonatomic) BOOL canCancel;
@property unsigned long long itemsDone;
@property unsigned long long itemsTotal;
@property double unifiedDone;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isProgressing;
@property (nonatomic) double estimatedTimeRemaining;
@property (retain) NSDate *lastUpdateTimestamp;
@property BOOL isResetting;
@property (nonatomic) double startTime;
@property long long activityType;
@property (readonly, nonatomic) NSArrayController *monitorController;
@property (readonly, nonatomic) BOOL isProgressIndeterminate;
@property (copy) NSString *nameSingular;
@property (copy) NSString *namePlural;
@property (copy) NSString *status;
@property (copy) NSString *bkItemDescription;

+ (BOOL)automaticallyNotifiesObserversOfCanCancel;
+ (BOOL)automaticallyNotifiesObserversOfIsProgressing;
+ (BOOL)automaticallyNotifiesObserversOfProgress;
+ (BOOL)automaticallyNotifiesObserversOfEstimatedTimeRemaining;
+ (id)keyPathsForValuesAffectingIsProgressIndeterminate;
+ (double)updateDelay;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_update;
- (unsigned long long)currentItem;
- (void)_updateStatus;
- (void)addActivityMonitor:(id)a0;
- (void)updateUnitBasedValues;
- (void)removeActivityMonitor:(id)a0;
- (void)_updateAggregateIsProgressing;
- (void)_updateAggregateValues;
- (void)_updateTimeBasedValues;
- (void)_processMonitorUpdate;
- (void)signalCancel:(id)a0;

@end
