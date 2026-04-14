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

- (void)resumeSession;
- (void).cxx_destruct;
- (id)description;
- (void)flushSessionAndSendCAEvent;
- (id)initWithAnonymousIdentifier:(id)a0 bundleIdentifier:(id)a1 productCategory:(id)a2;
- (void)pauseSession;
- (double)sessionActiveDuration;
- (double)sessionTotalDuration;

@end
