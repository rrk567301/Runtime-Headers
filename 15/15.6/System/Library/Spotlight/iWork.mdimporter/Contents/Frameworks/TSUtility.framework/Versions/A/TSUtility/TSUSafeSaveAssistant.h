@class NSURL, TSUTemporaryDirectory;

@interface TSUSafeSaveAssistant : NSObject {
    NSURL *_saveURL;
    TSUTemporaryDirectory *_temporaryDirectory;
}

@property (readonly, nonatomic) NSURL *writeURL;

+ (char)finishWritingToURL:(id)a0 byMovingOrCopyingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
+ (void)writeAttributes:(id)a0 toURL:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (char)endSaveWithSuccess:(char)a0 addingAttributes:(id)a1 error:(id *)a2;
- (char)endSaveWithSuccess:(char)a0 toURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (id)initForSavingToURL:(id)a0 error:(id *)a1;

@end
