@class NSArray, NSDictionary, AKAppleIDAuthenticationContext, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=ak_setContext:) AKAppleIDAuthenticationContext *ak_context;
@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSAttributedString *attributedContentText;
@property (copy) NSArray *attachments;
@property (copy) NSDictionary *userInfo;

+ (id)extensionItemWithAppleIDAuthenticationContext:(id)a0;

- (id)ak_context;
- (void)setAttachments:(id)a0;
- (id)attachments;
- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_matchingDictionaryRepresentation;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
