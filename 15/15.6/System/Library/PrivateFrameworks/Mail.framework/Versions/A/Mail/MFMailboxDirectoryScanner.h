@interface MFMailboxDirectoryScanner : NSObject

+ (void)enumerateEMLXFilesInDirectory:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateMailboxesAtDirectory:(id)a0 usingBlock:(id /* block */)a1;
+ (char)isMailboxURL:(id)a0;

@end
