@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSAttributedString *attributedContentText;
@property (copy) NSArray *attachments;
@property (copy) NSDictionary *userInfo;

- (id)attachments;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)a0;
- (void)setAttachments:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)_matchingDictionaryRepresentation;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
