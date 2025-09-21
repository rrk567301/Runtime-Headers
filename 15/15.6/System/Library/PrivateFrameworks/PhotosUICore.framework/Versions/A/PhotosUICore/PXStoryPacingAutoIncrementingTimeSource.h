@class NSString, NSObject;
@protocol PXStoryPacingClock, PXStoryPacingTimeSourceDelegate, PXDisplayLinkProtocol, OS_dispatch_queue;

@interface PXStoryPacingAutoIncrementingTimeSource : NSObject <PXStoryPacingTimeSource>

@property (retain, nonatomic) id<PXDisplayLinkProtocol> playLink;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (weak, nonatomic) id<PXStoryPacingClock> pacingClock;
@property (weak, nonatomic) id<PXStoryPacingTimeSourceDelegate> delegate;
@property (nonatomic, getter=isActive) char active;
@property (readonly, nonatomic) char isRealTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
