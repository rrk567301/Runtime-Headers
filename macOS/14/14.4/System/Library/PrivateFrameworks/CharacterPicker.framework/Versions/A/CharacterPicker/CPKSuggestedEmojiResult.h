@class NSArray;

@interface CPKSuggestedEmojiResult : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain) NSArray *emojiTokens;

+ (id)resultWithTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 emojiTokens:(id)a1;

- (id)description;

@end
