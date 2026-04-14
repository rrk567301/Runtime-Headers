@class FI_TFileSizeFormatter;

@interface FI_TFileSizeAsKBFormatter : FI_TFileSizeFormatter {
    struct TNSRef<FI_TFileSizeFormatter, void> { FI_TFileSizeFormatter *fRef; } _fileSizeFormatterZeroValue;
}

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)stringForObjectValue:(id)a0;
- (void)initCommon;
- (void)setStableWidth:(BOOL)a0;

@end
