@interface ECMessageBodyParserObject : NSObject {
    double _timeoutTime;
    char _shouldAbort;
    char _didTimeout;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (void)messageBodyParserWillBeginParsing:(id)a0;
- (char)shouldProceedParsing;

@end
