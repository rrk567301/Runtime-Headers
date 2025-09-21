@class NSString, NSDictionary, NSUUID;

@interface HMDResidentStatusChannelObserveLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) char didLoseStatuses;
@property (readonly, nonatomic) char didAddStatuses;
@property (readonly, nonatomic) char didUpdateStatuses;
@property (readonly, nonatomic) char didFindPrimary;
@property (readonly, nonatomic) char didPrimaryChange;
@property (readonly, nonatomic) char isStatusesEmpty;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)denominatorEvent:(id)a0;

- (id)initWithHomeUUID:(id)a0 didLoseStatuses:(char)a1 didAddStatuses:(char)a2 didUpdateStatuses:(char)a3 didFindPrimary:(char)a4 didPrimaryChange:(char)a5 isStatusesEmpty:(char)a6;
- (id)initWithHomeUUID:(id)a0 didLoseStatuses:(char)a1 didAddStatuses:(char)a2 didUpdateStatuses:(char)a3 didFindPrimary:(char)a4 didPrimaryChange:(char)a5 isStatusesEmpty:(char)a6 count:(long long)a7;

@end
