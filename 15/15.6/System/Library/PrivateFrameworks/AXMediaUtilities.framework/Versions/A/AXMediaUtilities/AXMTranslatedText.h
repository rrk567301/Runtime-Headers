@class NSString, NSLocale;

@interface AXMTranslatedText : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double confidence;
@property (nonatomic, getter=isLowConfidence) char lowConfidence;
@property (retain, nonatomic) NSLocale *targetLocale;

+ (id)text:(id)a0 confidence:(double)a1 isLowConfidence:(char)a2 targetLocale:(id)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
