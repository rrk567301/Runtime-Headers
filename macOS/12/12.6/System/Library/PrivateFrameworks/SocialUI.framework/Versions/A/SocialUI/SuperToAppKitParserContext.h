@class NSMutableAttributedString;

@interface SuperToAppKitParserContext : IMFromSuperParserContext {
    NSMutableAttributedString *_appKitAttributedString;
    long long _baseWritingDirection;
    BOOL _didAddBodyAttributes;
    BOOL _shouldEncodeFileTransfers;
}

@property (nonatomic) BOOL shouldEncodeInlineAttachments;

- (id)name;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0;
- (long long)baseWritingDirection;
- (id)resultsForLogging;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (void)parserDidStart:(id)a0 bodyAttributes:(id)a1;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7 emoji:(id)a8;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fileTransferGUID:(id)a3 filename:(id)a4 bookmark:(id)a5 width:(id)a6 height:(id)a7;
- (id)initWithAttributedString:(id)a0 shouldEncodeFileTransfers:(BOOL)a1;
- (id)appKitAttributedString;

@end
