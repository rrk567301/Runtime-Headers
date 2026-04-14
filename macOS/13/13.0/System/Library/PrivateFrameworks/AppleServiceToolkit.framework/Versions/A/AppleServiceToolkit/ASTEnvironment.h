@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject

@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *SOCKSProxyServer;
@property (retain, nonatomic) NSNumber *SOCKSProxyPort;

+ (BOOL)isInternalBuild;
+ (id)currentEnvironment;
+ (id)environmentWithEnvironmentType:(unsigned long long)a0;
+ (void)resetEnvironment;

- (id)init;
- (void).cxx_destruct;
- (id)_defaultServerURL;
- (id)initWithEnvironmentType:(unsigned long long)a0;
- (id)_environmentServerString;
- (id)_generateServerURL;
- (unsigned long long)_defaultServerSelection;

@end
