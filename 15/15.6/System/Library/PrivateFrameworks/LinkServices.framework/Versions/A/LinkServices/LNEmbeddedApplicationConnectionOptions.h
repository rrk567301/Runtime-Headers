@class NSString;

@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions>

@property (nonatomic) char sceneless;
@property (readonly, nonatomic) char activateSuspended;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) char allowsForegroundAppLaunchWhileInCarPlay;
@property (nonatomic) unsigned short actionSource;
@property (copy, nonatomic) NSString *actionSourceOverride;
@property (nonatomic) char isCameraCaptureAction;
@property (readonly, nonatomic) char isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
