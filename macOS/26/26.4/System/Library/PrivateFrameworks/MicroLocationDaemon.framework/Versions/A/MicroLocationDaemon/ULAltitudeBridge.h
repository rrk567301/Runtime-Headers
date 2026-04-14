@class NSString;
@protocol ULAltitudeDelegate;

@interface ULAltitudeBridge : NSObject <ULAltitudeSource>

@property (readonly, weak, nonatomic) id<ULAltitudeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;

@end
