@interface VKDebugSettingsExt : NSObject

@property (nonatomic) BOOL layoutContinuously;

+ (id)sharedSettings;
+ (BOOL)getlayoutContinuously;
+ (void)setlayoutContinuously:(BOOL)a0;


@end
