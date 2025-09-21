@class NSString;
@protocol CNUIIDSHandle;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>

@property (retain, nonatomic) id<CNUIIDSHandle> handle;
@property (nonatomic) char available;
@property (readonly, nonatomic) char isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
