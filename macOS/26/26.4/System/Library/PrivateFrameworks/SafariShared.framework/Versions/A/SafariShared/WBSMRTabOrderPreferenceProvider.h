@interface WBSMRTabOrderPreferenceProvider : NSObject <WBSTabOrderPreferenceProviding> {
    void /* unknown type, empty encoding */ defaultProvider;
    void /* unknown type, empty encoding */ shouldInsertAfterCurrentTab;
}

@property (nonatomic, readonly) unsigned long long newTabPosition;
@property (nonatomic, readonly) BOOL newTabPositionAppliesToSpawnedTabs;
@property (nonatomic, readonly) BOOL newBlankTabPositionAppliesToAllBlankTabs;
@property (nonatomic, readonly) BOOL suppressRelatingNewBlankTabs;
@property (nonatomic, readonly) double minimumDelayForRelatingNewBlankTab;

- (void).cxx_destruct;
- (id)init;

@end
