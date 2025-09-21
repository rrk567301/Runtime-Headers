@class NSScanner;

@interface ECMessageBodyHTMLParser : ECMessageBodyParser {
    NSScanner *_scanner;
}

- (void)dealloc;
- (char)parse;
- (void)_consumeNodesFromNode:(id)a0 upToNode:(id)a1;
- (void)_findBody;
- (char)_isMilestoneTagName:(id)a0;
- (void)didFindError:(id)a0;
- (id)initWithHTML:(id)a0;
- (Class)messageBodyElementClass;
- (unsigned long long)messageBodyStringAccumulatorDefaultOptions;

@end
