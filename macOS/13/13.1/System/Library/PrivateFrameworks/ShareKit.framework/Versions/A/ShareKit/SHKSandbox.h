@interface SHKSandbox : NSObject

+ (id)filteredItemsFromItems:(id)a0 processWithPID:(int)a1;
+ (id)filteredItemsFromAttributedString:(id)a0 processWithPID:(int)a1 textView:(id)a2;
+ (id)consumeExtensions:(id)a0;
+ (BOOL)canAccessURL:(id)a0 processWithPID:(int)a1;
+ (BOOL)_canReadFileAtURL:(id)a0 pid:(int)a1;
+ (id)filteredItemsFromAttributedString:(id)a0 processWithPID:(int)a1;
+ (id)filteredItemsFromSingleItem:(id)a0 processWithPID:(int)a1;
+ (id)safeClassNamesForArchiving;
+ (id)safeUnarchiveObjectWithData:(id)a0;
+ (id)extensionsForSharingItems:(id)a0;
+ (void)releaseExtensionTokens:(id)a0;

@end
