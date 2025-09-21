@class NSArray, NSString, NSMutableArray, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand

@property (retain, nonatomic) NSMutableArray *_subcommandArray;
@property (retain, nonatomic) SCRCArgumentSubcommand *_subcommand;
@property (copy, nonatomic) NSArray *_arguments;
@property (nonatomic) char isLaunchedAtLogin;
@property (copy, nonatomic) NSString *appName;

+ (id)processIdentifier;
+ (id)versionString;
+ (id)commandPath;

- (int)run;
- (void).cxx_destruct;
- (char)parse;
- (void)stop;
- (id)initWithArgc:(int)a0 argv:(const char **)a1;
- (id)_displayHelp:(id)a0;
- (id)_displayVersion:(id)a0;
- (void)addSubcommand:(id)a0;
- (id)setRunningAtStartup:(id)a0;

@end
