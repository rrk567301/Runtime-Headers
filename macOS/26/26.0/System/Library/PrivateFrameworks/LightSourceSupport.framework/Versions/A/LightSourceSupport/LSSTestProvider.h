@class NSString, NSObject;
@protocol OS_dispatch_queue, LSSProviderDelegate;

@interface LSSTestProvider : NSObject <LSSProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _deliveredInitialUpdate;
    struct { double time; double intensity; void /* unknown type, empty encoding */ direction; struct { void /* unknown type, empty encoding */ vector; } referenceOrientation; BOOL expectPause; } _lastUpdate;
    BOOL _expectRealtimeUpdates;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
