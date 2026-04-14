@class NSString;

@interface SKDModelContext : NSObject <SKDModelContext>

@property (readonly, nonatomic) NSString *domain;
@property (nonatomic) long long maxLoadingDelta;
@property (nonatomic) long long maxComputeDelta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end
