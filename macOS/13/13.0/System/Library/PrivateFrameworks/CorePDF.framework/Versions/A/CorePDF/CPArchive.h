@class NSData, NSMutableString, NSAttributedString;

@interface CPArchive : NSObject <CPDisposable> {
    struct __CFArray { } *selections;
    struct __CFArray { } *imageNodes;
    NSMutableString *plainText;
    NSMutableString *htmlString;
    NSMutableString *htmlStringNoImages;
    NSData *webArchiveData;
    NSAttributedString *structuredString;
    NSData *RTFDData;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)dispose;
- (id)webArchiveData;
- (id)html;
- (id)plainText;
- (void)addSelection:(struct CGPDFSelection { } *)a0;
- (id)structuredString;
- (id)RTFDData;

@end
