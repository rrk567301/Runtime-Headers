@class PXVideoSession, NSImage, NSString;

@interface PXGVideoPlayerViewConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) PXVideoSession *videoSession;
@property (readonly, nonatomic) BOOL toneMapToStandardDynamicRange;
@property (readonly, nonatomic) NSImage *placeholderImage;
@property (retain, nonatomic) Class visualEffectViewClass;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
