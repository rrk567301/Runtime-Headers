@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConfig : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, retain, nonatomic) NSString *projectName;
@property (readonly, retain, nonatomic) NSString *defaultsPath;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProjectName:(id)a0;
- (void)clearConfig;
- (BOOL)getBoolConfigForKey:(id)a0;
- (BOOL)getBoolConfigForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)getConfig;
- (id)getNumberConfigForKey:(id)a0;
- (id)getStringConfigForKey:(id)a0;
- (id)initWithProjectName:(id)a0 defaultsPath:(id)a1;
- (void)setConfig:(id)a0 forKey:(id)a1;
- (id)stateSafeGetConfig;
- (void)stateSafeSetConfig:(id)a0 forKey:(id)a1;

@end
