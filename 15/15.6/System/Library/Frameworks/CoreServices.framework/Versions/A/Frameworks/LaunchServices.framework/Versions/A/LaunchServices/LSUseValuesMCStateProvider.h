@class NSString, NSSet;

@interface LSUseValuesMCStateProvider : NSObject <LSMCStateProvider> {
    char _allowlistEnabled;
    NSSet *_allowlistedBundles;
    NSSet *_restrictedBundles;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
