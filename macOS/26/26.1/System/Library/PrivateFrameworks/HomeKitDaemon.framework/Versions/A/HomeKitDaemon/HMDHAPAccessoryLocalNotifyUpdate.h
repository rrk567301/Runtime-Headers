@class NSError, NSString, HMDHAPAccessory, HMFPromise, HMFFuture, NSObject, NSMutableArray, HMDHome;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HMDHAPAccessoryLocalNotifyUpdate : NSObject <HMFLogging, HMDHAPAccessoryLocalNotifyUpdate>

@property (retain) NSMutableArray *characteristicsWithEnableYes;
@property (retain) NSMutableArray *characteristicsWithEnableNo;
@property (retain) NSMutableArray *characteristicResponseTuples;
@property (retain) NSError *error;
@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDHAPAccessory *hmdHAPAccessory;
@property (retain) HMFPromise *enableNotifyCompletionPromise;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *transportGroup;
@property BOOL inProcessing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMFFuture *completionFuture;
@property BOOL skipLocalNotificationsUpdate;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_arrayForCharacteristicsWithEnable:(BOOL)a0;
- (void)_clearCachedValueForCharacteristics:(id)a0;
- (void)_copyRelevantFieldsFrom:(id)a0 forEnableValue:(BOOL)a1;
- (void)_performLocalNotifyUpdate;
- (void)_performLocalNotifyUpdateForCharacteristics:(id)a0 enable:(BOOL)a1;
- (BOOL)cachedEnableValueForCharacteristic:(id)a0 presentInCache:(BOOL *)a1;
- (void)copyRelevantFieldsFrom:(id)a0;
- (id)initWithHome:(id)a0 hmdHAPAccessory:(id)a1 queue:(id)a2;
- (void)performLocalNotifyUpdate;
- (void)setEnable:(BOOL)a0 forCharacteristics:(id)a1;

@end
