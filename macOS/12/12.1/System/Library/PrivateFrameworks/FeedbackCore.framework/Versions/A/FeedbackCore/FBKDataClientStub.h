@class NSString, NSBundle;

@interface FBKDataClientStub : NSObject <FBKForegroundDataClient, FBKLoginManagerDelegate>

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *testFixtureDir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
