@class NSString;

@interface TCTokenInfo : NSObject <NSCopying>

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } precedingRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } followingRange;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } enclosingRange;
@property (readonly, copy) NSString *tokenText;
@property (readonly) long long tokenId;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 enclosingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenText:(id)a2 tokenId:(long long)a3;

@end
