@class NSString;

@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions>

@property (nonatomic) BOOL sceneless;
@property (readonly, nonatomic) BOOL activateSuspended;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) BOOL allowsForegroundAppLaunchWhileInCarPlay;
@property (nonatomic) unsigned short actionSource;
@property (copy, nonatomic) NSString *actionSourceOverride;
@property (nonatomic) BOOL isCameraCaptureAction;
@property (nonatomic) long long assistantDismissalPolicy;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
