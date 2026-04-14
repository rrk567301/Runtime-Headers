@class NSString;
@protocol NSObject;

@interface CBTrackedAnimation : NSObject

@property (readonly) NSString *reason;
@property (retain) id<NSObject> trackingObject;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isTracking;
- (void)dealloc;
- (void)startTracking;
- (void)stopTracking;

@end
