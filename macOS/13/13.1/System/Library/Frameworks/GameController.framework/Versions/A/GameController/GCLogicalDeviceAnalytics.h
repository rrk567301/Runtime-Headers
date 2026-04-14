@class NSString, NSMutableArray, NSDate;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface GCLogicalDeviceAnalytics : NSObject {
    NSDate *_curSessionStartTime;
    NSDate *_firstSessionStartTime;
    BOOL _eventSent;
}

@property (retain, nonatomic) NSMutableArray *sessionIntervals;
@property (readonly, retain, nonatomic) id<NSObject, NSCopying, NSSecureCoding> controllerID;
@property (readonly, retain, nonatomic) NSString *bundleID;
@property (readonly, retain, nonatomic) NSString *productCategory;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAnonymousIdentifier:(id)a0 bundleIdentifier:(id)a1 productCategory:(id)a2;
- (double)sessionActiveDuration;
- (double)sessionTotalDuration;
- (void)resumeSession;
- (void)pauseSession;
- (void)flushSessionAndSendCAEvent;

@end
