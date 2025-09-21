@class NSString, TUCallProvider, NSSet;

@interface CNTUCallProvider : NSObject <CNTUCallProvider>

@property (copy, nonatomic) TUCallProvider *callProvider;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char supportsAudio;
@property (readonly, nonatomic) char supportsVideo;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (nonatomic) char isEligibleDefaultApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
