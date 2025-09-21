@class NSURL, NSMutableAttributedString;

@interface InstantMessage : IMMessage

@property (retain) NSMutableAttributedString *textWithAppAttributes;
@property BOOL didHighlightMyName;
@property BOOL didParseText;
@property BOOL didParseSubject;
@property (getter=isSaved) BOOL saved;
@property (retain) NSURL *fileURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)text;
- (void).cxx_destruct;
- (id)senderName;
- (id)superText;
- (BOOL)isAddressedToMe;
- (void)_upgradeText;
- (void)highlightMyNameAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)superMessageSubject;

@end
