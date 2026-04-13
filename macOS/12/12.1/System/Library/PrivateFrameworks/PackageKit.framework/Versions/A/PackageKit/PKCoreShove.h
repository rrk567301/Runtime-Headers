@interface PKCoreShove : NSObject

@property unsigned long long optionFlags;
@property id /* block */ loggingBlock;
@property id /* block */ errorBlock;

+ (BOOL)isShoveDebug;
+ (id /* block */)genericSyslogLoggingBlock;

- (int)shoveOneLevel:(id)a0 dest:(id)a1;
- (void)logWithLevel:(long long)a0 withMessage:(id)a1;
- (id)_debugPathDescription:(id)a0;
- (void)_reportShoveError:(long long)a0 source:(id)a1 dest:(id)a2 shoveError:(id)a3 line:(id)a4;
- (int)_moveOrRemoveDestinationDirectory:(id)a0 newDirectoryName:(id *)a1 sourcePath:(id)a2;
- (int)_relinkFile:(id)a0 dest:(id)a1 sourceAttribs:(id)a2 destAttribs:(id)a3;
- (int)_checkForAndFixCircularDirectoryLink:(id)a0 moveAsidePath:(id)a1;
- (BOOL)_isEmptyDirectory:(id)a0;
- (id)_extendedAttributeDataForPath:(id)a0 andName:(id)a1;
- (void)_propagateFileModification:(id)a0 flags:(unsigned int)a1 eaValue:(id)a2;
- (void)_reportShoveErrorDomain:(id)a0 withCode:(long long)a1 shoveError:(id)a2 source:(id)a3 dest:(id)a4 line:(id)a5;
- (id)_debugPathAttributes:(id)a0;
- (int)shoveWithOptions:(id)a0;

@end
