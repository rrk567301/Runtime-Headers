@class NSString;
@protocol NSObject;

@interface CBTrackedAnimation : NSObject

@property (readonly) NSString *reason;
@property (retain) id<NSObject> trackingObject;

- (BOOL)isTracking;
- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void)startTracking;
- (void)stopTracking;

@end
