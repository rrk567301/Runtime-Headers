@interface FBSApplicationUninstallOptions : NSObject

@property (nonatomic, getter=isUserInitiated) char userInitiated;
@property (nonatomic) char showsArchiveOption;

+ (id)userInitiated;

@end
