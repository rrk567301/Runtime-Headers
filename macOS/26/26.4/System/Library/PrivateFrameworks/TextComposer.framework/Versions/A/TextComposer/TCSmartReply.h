@class NSString;

@interface TCSmartReply : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *responseText;
@property (readonly, nonatomic) BOOL isRichSmartReply;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithResponseText:(id)a0 isRichSmartReply:(BOOL)a1;

@end
