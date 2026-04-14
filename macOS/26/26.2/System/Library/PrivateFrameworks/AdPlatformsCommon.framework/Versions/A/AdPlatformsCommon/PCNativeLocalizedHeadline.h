@class NSString;

@interface PCNativeLocalizedHeadline : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *languageIdentifier;
@property (retain, nonatomic) NSString *value;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
