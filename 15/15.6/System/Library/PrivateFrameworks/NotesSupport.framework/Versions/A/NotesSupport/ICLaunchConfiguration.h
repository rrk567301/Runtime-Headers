@class NSString, NSArray;

@interface ICLaunchConfiguration : NSObject

@property (class, readonly, nonatomic) ICLaunchConfiguration *currentConfiguration;
@property (class, readonly, nonatomic) ICLaunchConfiguration *userInterfaceTesting;

@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *container;
@property (nonatomic) char resetsCloud;
@property (nonatomic) char resetsContainer;
@property (nonatomic) char resetsState;
@property (copy, nonatomic) NSString *localAccountArchiveName;
@property (copy, nonatomic) NSString *cloudAccountArchiveName;
@property (readonly, nonatomic) NSArray *launchArguments;

+ (id)nonDefaultValueForValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithEnvironment:(unsigned long long)a0 container:(id)a1 resetsContainer:(char)a2 resetsCloud:(char)a3 resetsState:(char)a4 localAccountArchive:(id)a5 cloudAccountArchive:(id)a6;

@end
