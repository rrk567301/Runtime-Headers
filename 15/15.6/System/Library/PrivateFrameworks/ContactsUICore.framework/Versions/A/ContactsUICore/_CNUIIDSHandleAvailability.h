@class NSString;
@protocol CNUIIDSHandle;

@interface _CNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>

@property (readonly, nonatomic) id<CNUIIDSHandle> handle;
@property (readonly, nonatomic, getter=isAvailable) char available;
@property (readonly, nonatomic) char isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 available:(char)a1;

@end
