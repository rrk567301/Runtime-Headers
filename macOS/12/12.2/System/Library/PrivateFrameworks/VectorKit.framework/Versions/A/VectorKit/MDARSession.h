@interface MDARSession : NSObject

@property (class, readonly) BOOL isSupported;

+ (id)newPositionalTrackingSession;
+ (id)newGeoTrackingSession;

@end
