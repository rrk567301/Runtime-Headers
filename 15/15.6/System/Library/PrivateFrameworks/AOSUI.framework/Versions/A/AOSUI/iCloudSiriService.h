@class NSString;

@interface iCloudSiriService : MMService <MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (char)hasDataToMerge;
- (char)isDataService;

@end
