@class NSAttributedString;

@interface MKAttributedStringVibrancySplitter : NSObject {
    NSAttributedString *_markedAttributedString;
    NSAttributedString *_vibrantAttributedString;
    NSAttributedString *_nonvibrantAttributedString;
}

@property (readonly, nonatomic) BOOL hasMixedVibrancy;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) NSAttributedString *vibrantAttributedString;
@property (readonly, nonatomic) NSAttributedString *nonvibrantAttributedString;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 appearance:(id)a1;
- (void)calculateAttributedStringsIfNecessary;

@end
