@class NSAttributedString;

@interface CSSmartReply : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *responseText;
@property (nonatomic) char isRichSmartReply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseText:(id)a0 isRichSmartReply:(char)a1;

@end
