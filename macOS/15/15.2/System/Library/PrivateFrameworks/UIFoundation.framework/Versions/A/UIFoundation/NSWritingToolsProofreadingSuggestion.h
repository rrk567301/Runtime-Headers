@class NSUUID, NSAttributedString;

@interface NSWritingToolsProofreadingSuggestion : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (readonly, copy, nonatomic) NSAttributedString *replacementString;
@property (readonly, nonatomic) long long lengthDelta;
@property (nonatomic) long long state;

- (void)dealloc;
- (id)initWithUUID:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2 state:(long long)a3;

@end
