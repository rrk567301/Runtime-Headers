@interface PXGridZeroSettingsProvider : NSObject

@property (class, readonly, nonatomic) PXGridZeroSettingsProvider *sharedInstance;

@property (readonly, nonatomic) BOOL isVideoAutoplayEnabled;
@property (readonly, nonatomic) BOOL isSharedLibraryBadgingEnabled;
@property (readonly, nonatomic) BOOL isStacksEnabled;

@end
