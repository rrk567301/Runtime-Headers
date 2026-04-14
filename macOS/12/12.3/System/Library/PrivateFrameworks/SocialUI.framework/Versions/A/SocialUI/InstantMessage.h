@class NSURL, NSMutableAttributedString;

@interface InstantMessage : IMMessage

@property (retain) NSMutableAttributedString *textWithAppAttributes;
@property BOOL didHighlightMyName;
@property BOOL didParseText;
@property BOOL didParseSubject;
@property (getter=isSaved) BOOL saved;
@property (retain) NSURL *fileURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)text;
- (id)superText;
- (id)senderName;
- (BOOL)isAddressedToMe;
- (void)_upgradeText;
- (id)superMessageSubject;
- (void)highlightMyNameAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
