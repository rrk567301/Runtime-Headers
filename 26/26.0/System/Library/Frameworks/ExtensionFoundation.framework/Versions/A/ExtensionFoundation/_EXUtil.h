@interface _EXUtil : NSObject

+ (void)bootstrap;
+ (void)_checkIn;
+ (const struct { unsigned int x0[8]; } *)auditTokenForCurrentProcess;
+ (int)_PKServiceStartWithArguments:(const char **)a0 count:(int)a1;
+ (void)_enterCustomSandbox:(id)a0;
+ (void /* function */ *)_getEntryPointFunction;
+ (id)createRunningExtensionWithClassName:(id)a0 error:(id *)a1;
+ (id)ditionaryFromPropertyList:(id)a0;
+ (void)queryControllerDelegate:(id)a0 didUpdateController:(id)a1;
+ (void)queryControllerDelegate:(id)a0 didUpdateController:(id)a1 enabledCount:(unsigned long long)a2 disabledCount:(unsigned long long)a3 unelectedCount:(unsigned long long)a4;
+ (id)xpcObjectFromDictionary:(id)a0;

@end
