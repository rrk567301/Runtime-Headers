@class NSObject;
@protocol OS_dispatch_queue;

@interface IMDDController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQueue;

+ (id)sharedInstance;
+ (id)allSupportedDDAttributesKeys;

- (void).cxx_destruct;
- (id)init;
- (void)_processLinkInAttributedString:(id)a0;
- (void)_processForRichLinksInAttributedString:(id)a0 plainText:(id)a1 didProcess:(BOOL *)a2;
- (BOOL)_scanAttributedStringWithMessage:(id)a0 attributedString:(id)a1 plainText:(id)a2;
- (BOOL)_scanMessageUsingScanner:(id)a0 attributedString:(id)a1;
- (void)scanMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)scanMessage:(id)a0 outgoing:(BOOL)a1 waitUntilDone:(BOOL)a2 completionBlock:(id /* block */)a3;
- (struct __DDScanner { } *)sharedScanner;

@end
