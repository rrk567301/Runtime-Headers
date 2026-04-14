@class NSString;

@interface APBonjourCacheEvictionTTL : NSObject <APBonjourCacheEvictionPolicy>

@property (nonatomic) double timeToLiveSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEvict:(id)a0;

@end
