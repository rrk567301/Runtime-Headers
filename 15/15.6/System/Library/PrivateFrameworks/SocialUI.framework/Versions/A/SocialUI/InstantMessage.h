@class NSURL, NSMutableAttributedString;

@interface InstantMessage : IMMessage

@property (retain) NSMutableAttributedString *textWithAppAttributes;
@property char didHighlightMyName;
@property char didParseText;
@property char didParseSubject;
@property (getter=isSaved) char saved;
@property (retain) NSURL *fileURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)text;
- (id)senderName;
- (id)superText;
- (char)isAddressedToMe;
- (void)_upgradeText;
- (void)highlightMyNameAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)superMessageSubject;

@end
