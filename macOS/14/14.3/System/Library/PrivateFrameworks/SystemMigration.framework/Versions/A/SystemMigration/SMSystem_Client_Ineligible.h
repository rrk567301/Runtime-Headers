@class NSImage;

@interface SMSystem_Client_Ineligible : SMSystem_Client

@property (retain) NSImage *overrideIcon;

+ (id)guiInterestedKeys;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayIcon;
- (id)displayState;
- (unsigned long long)uiRank;

@end
