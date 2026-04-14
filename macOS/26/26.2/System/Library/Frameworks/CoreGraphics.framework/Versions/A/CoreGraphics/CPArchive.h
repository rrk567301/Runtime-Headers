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

- (void)finalize;
- (id)init;
- (void)dispose;
- (void)dealloc;
- (id)webArchiveData;
- (id)RTFDData;
- (void)addSelection:(struct CGPDFSelection { } *)a0;
- (id)html;
- (id)plainText;
- (id)structuredString;

@end
