@class NSAttributedString;

@interface CSSmartReply : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *responseText;
@property (nonatomic) BOOL isRichSmartReply;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResponseText:(id)a0 isRichSmartReply:(BOOL)a1;

@end
