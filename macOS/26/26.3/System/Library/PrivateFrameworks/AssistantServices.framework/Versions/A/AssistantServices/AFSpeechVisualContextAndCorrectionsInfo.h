@class NSArray, NSString;

@interface AFSpeechVisualContextAndCorrectionsInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *messagesContext;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSString *recognizedText;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
