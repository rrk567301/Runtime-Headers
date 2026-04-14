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
- (void)setAttachments:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_matchingDictionaryRepresentation;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
