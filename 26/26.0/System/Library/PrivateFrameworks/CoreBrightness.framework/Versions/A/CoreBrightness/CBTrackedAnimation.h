@class NSString;
@protocol NSObject;

@interface CBTrackedAnimation : NSObject

@property (readonly) NSString *reason;
@property (retain) id<NSObject> trackingObject;

- (BOOL)isTracking;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)startTracking;
- (void)stopTracking;

@end
