@interface MDARSession : NSObject

@property (class, readonly) char isSupported;

+ (id)newGeoTrackingSession;
+ (id)newPositionalTrackingSession;

@end
