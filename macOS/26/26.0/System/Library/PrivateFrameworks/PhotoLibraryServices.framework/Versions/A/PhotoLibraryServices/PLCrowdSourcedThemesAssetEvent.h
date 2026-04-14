@class NSString;

@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end
