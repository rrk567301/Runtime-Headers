@class NSString, NSDictionary;

@interface _LTGenmojiReplacementInfo : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (readonly, copy, nonatomic) NSString *requestUniqueID;
@property (readonly, copy, nonatomic) NSString *originalSubstring;
@property (readonly, copy, nonatomic) NSString *placeholderString;
@property (copy, nonatomic) NSDictionary *sourceAttributes;

- (void).cxx_destruct;
- (id)initWithOriginalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestID:(id)a2 originalSubstring:(id)a3 placeholderString:(id)a4;

@end
