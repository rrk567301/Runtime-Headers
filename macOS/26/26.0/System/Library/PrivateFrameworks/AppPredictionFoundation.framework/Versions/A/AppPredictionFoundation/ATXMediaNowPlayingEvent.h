@class NSString, NSDate;

@interface ATXMediaNowPlayingEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double eventDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 bundleID:(id)a2 title:(id)a3 playbackState:(long long)a4;
- (BOOL)isEqualToATXMediaNowPlayingEvent:(id)a0;

@end
