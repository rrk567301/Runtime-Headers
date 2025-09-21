@class NSString;

@interface IRContextRequestOverrides : NSObject

@property (nonatomic) char overrideAppInFocusWindow;
@property (retain, nonatomic) NSString *overrideBundleId;

- (void).cxx_destruct;
- (id)initWithOverrideAppInFocusWindow:(char)a0 overrideBundleId:(id)a1;

@end
