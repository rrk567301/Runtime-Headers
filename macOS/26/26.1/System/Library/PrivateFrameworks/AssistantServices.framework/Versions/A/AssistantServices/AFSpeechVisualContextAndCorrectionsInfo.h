@class NSArray, NSString;

@interface AFSpeechVisualContextAndCorrectionsInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *messagesContext;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSString *recognizedText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
