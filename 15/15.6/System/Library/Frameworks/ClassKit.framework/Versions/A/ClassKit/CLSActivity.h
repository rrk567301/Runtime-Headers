@class NSString, NSArray, NSDate, CLSActivityItem;

@interface CLSActivity : CLSObject <CLSRelationable> {
    char _paused;
    NSDate *_activityStartDate;
    NSString *_primaryActivityItemIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (copy, nonatomic) NSString *parentEntityName;
@property (nonatomic, getter=isBackgroudTimeTrackingEnabled) char backgroundTimeTrackingEnabled;
@property (nonatomic) long long type;
@property (nonatomic) double progress;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property (readonly, nonatomic) NSArray *additionalActivityItems;

+ (char)supportsSecureCoding;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resume;
- (id)_init;
- (void)pause;
- (void)start;
- (id)dictionaryRepresentation;
- (char)isStarted;
- (void)stop;
- (void)_generatePartialTimeOnSave;
- (void)_generateTimeInterval;
- (id)_initWithTargetClass:(Class)a0;
- (char)_isObjectActivityItem:(id)a0 withIdentifier:(id)a1;
- (char)_isObjectPrimaryItem:(id)a0;
- (id)activityItemWithIdentifier:(id)a0;
- (void)addAdditionalActivityItem:(id)a0;
- (void)addProgressRangeFromStart:(double)a0 toEnd:(double)a1;
- (long long)effectiveAuthorizationStatus;
- (void)removeAllActivityItems;
- (double)runningDelta;
- (char)validatePrimaryActivityItemType:(id)a0;

@end
