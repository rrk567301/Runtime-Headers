@class NSString, NSAttributedString, IMKCandidateUIStringProperties;

@interface IMKCandidateUIString : NSObject

@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) IMKCandidateUIStringProperties *properties;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) char usesSizeCacheForChineseCharacters;

+ (id)UIStringWithAttributedString:(id)a0;
+ (id)UIStringWithString:(id)a0 properties:(id)a1;

- (void)dealloc;
- (id)attributedStringWithForegroundColor:(id)a0;
- (id)ellipticalAttributedString:(double)a0 isVerticallyAligned:(char)a1 color:(id)a2;

@end
