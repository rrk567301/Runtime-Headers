@class NSString;

@interface UfDkPx3UB2zY60 : NSObject <AVContentKeySessionDelegate>

@property (nonatomic) int audibleDRMGroupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (id)initWithDRMGroupID:(int)a0;

@end
