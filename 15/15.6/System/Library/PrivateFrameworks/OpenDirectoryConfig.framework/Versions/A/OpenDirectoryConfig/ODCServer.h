@class NSString;

@interface ODCServer : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned int type;
@property (readonly) unsigned int status;
@property (readonly) char authBound;
@property (readonly) char inAuthSearchPath;
@property (readonly) char inContactsSearchPath;

+ (id)configuredServers:(id)a0 withStatus:(char)a1 error:(id *)a2;
+ (id)readEnabledServices:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 type:(unsigned int)a1 status:(unsigned int)a2 authBound:(char)a3 inAuthSearchPath:(char)a4 inContactsSearchPath:(char)a5;

@end
