@interface FileUtils : NSObject

+ (BOOL)getXattrBoolValWithName:(id)a0 at:(id)a1;
+ (id)getXattrWithName:(id)a0 at:(id)a1;
+ (id)getXattrWithName:(id)a0 onFile:(int)a1;
+ (BOOL)hasXattrWithName:(id)a0 at:(id)a1;
+ (id)readXattrWithReader:(id /* block */)a0 errorContext:(id /* block */)a1;
+ (BOOL)setXattrWithName:(id)a0 value:(id)a1 at:(id)a2;
+ (id)temporaryFileWithPrefix:(id)a0 fd:(int *)a1;

- (id)init;

@end
