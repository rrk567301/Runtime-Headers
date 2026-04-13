@class NSDictionary, NSArray, NSString;

@interface SSConnectionOptions : NSObject

@property long long minimumEncryptionLevel;
@property BOOL shouldGetUserInfo;
@property long long controlType;
@property long long sessionSelectionAction;
@property long long panningMode;
@property long long screenQualityMode;
@property struct CGSize { double width; double height; } maxSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restoreWindowFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restoreContentFrame;
@property unsigned long long selectedScreen;
@property BOOL shouldScaleScreen;
@property BOOL shouldCurtainScreen;
@property BOOL shouldSharePasteboard;
@property BOOL shouldFallbackToObserve;
@property long long authMethod;
@property (copy) NSDictionary *hints;
@property (copy) NSArray *videoEncodings;
@property BOOL skipAddressPresentation;
@property BOOL shouldReturnToAddressBox;
@property BOOL openInFullScreen;
@property BOOL showConnectionProgress;
@property BOOL skipUserPassDialogIfPossible;
@property BOOL noReconnect;
@property BOOL connectingToIOSdevice;
@property (retain) NSString *idsDestination;
@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property long long appleIDInviteMethod;

+ (id)defaultOptions;

- (void)dealloc;
- (id)description;
- (id)init;

@end
