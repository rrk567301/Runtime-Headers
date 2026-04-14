@class FI_TFileSizeFormatter;

@interface FI_TFileSizeAsKBFormatter : FI_TFileSizeFormatter {
    FI_TFileSizeFormatter *_fileSizeFormatterZeroValue;
}

+ (id)sharedFormatter;

- (id)stringForObjectValue:(id)a0;
- (void)initCommon;
- (void).cxx_destruct;
- (void)setStableWidth:(BOOL)a0;

@end
