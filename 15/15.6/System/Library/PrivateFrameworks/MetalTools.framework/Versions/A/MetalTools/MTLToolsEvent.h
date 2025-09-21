@class NSString;
@protocol MTLDevice;

@interface MTLToolsEvent : MTLToolsObject <MTLEventSPI>

@property (nonatomic) char enableBarrier;
@property (readonly) char supportsRollback;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
