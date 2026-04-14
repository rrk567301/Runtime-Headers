@interface MFMailboxDirectoryScanner : NSObject

+ (void)enumerateMailboxesAtDirectory:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateEMLXFilesInDirectory:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)isMailboxURL:(id)a0;

@end
