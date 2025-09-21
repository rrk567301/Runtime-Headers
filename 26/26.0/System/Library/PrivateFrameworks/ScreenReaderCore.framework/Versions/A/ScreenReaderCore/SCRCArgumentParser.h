@class NSArray, NSString, NSMutableArray, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand

@property (retain, nonatomic) NSMutableArray *_subcommandArray;
@property (retain, nonatomic) SCRCArgumentSubcommand *_subcommand;
@property (copy, nonatomic) NSArray *_arguments;
@property (nonatomic) BOOL isLaunchedAtLogin;
@property (copy, nonatomic) NSString *appName;

+ (id)processIdentifier;
+ (id)versionString;
+ (id)commandPath;

- (void)stop;
- (int)run;
- (BOOL)parse;
- (void).cxx_destruct;
- (id)initWithArgc:(int)a0 argv:(const char **)a1;
- (id)_displayHelp:(id)a0;
- (id)_displayVersion:(id)a0;
- (void)addSubcommand:(id)a0;
- (id)setRunningAtStartup:(id)a0;

@end
