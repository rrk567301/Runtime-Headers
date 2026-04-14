@class NSUUID, NSAttributedString, NSString;

@interface NSWritingToolsContext : NSObject <_NSWritingToolsContextKitAdditions>

@property (readonly, copy) NSAttributedString *attributedText;
@property (readonly) NSUUID *uuid;
@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSUUID *identifier;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } evaluatedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithAttributedText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setEvaluatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
