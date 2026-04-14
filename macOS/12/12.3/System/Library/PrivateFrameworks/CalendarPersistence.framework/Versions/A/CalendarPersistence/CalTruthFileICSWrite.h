@class NSString, ICSDocument;

@interface CalTruthFileICSWrite : NSObject <CalTruthFileMethod> {
    NSString *_path;
    ICSDocument *_document;
}

+ (id)methodWithPath:(id)a0 document:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPath:(id)a0 document:(id)a1;

@end
