@class NSString, NSArray, NSDate, CLSActivityItem;

@interface CLSActivity : CLSObject <CLSRelationable> {
    BOOL _paused;
    NSDate *_activityStartDate;
    NSString *_primaryActivityItemIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (copy, nonatomic) NSString *parentEntityName;
@property (nonatomic, getter=isBackgroudTimeTrackingEnabled) BOOL backgroundTimeTrackingEnabled;
@property (nonatomic) long long type;
@property (nonatomic) double progress;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property (readonly, nonatomic) NSArray *additionalActivityItems;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)_init;
- (void)start;
- (void)pause;
- (id)dictionaryRepresentation;
- (BOOL)isStarted;
- (void)stop;
- (id)_initWithTargetClass:(Class)a0;
- (long long)effectiveAuthorizationStatus;
- (void)_generatePartialTimeOnSave;
- (void)addProgressRangeFromStart:(double)a0 toEnd:(double)a1;
- (double)runningDelta;
- (void)_generateTimeInterval;
- (id)activityItemWithIdentifier:(id)a0;
- (BOOL)validatePrimaryActivityItemType:(id)a0;
- (BOOL)_isObjectActivityItem:(id)a0 withIdentifier:(id)a1;
- (BOOL)_isObjectPrimaryItem:(id)a0;
- (void)addAdditionalActivityItem:(id)a0;
- (void)removeAllActivityItems;

@end
