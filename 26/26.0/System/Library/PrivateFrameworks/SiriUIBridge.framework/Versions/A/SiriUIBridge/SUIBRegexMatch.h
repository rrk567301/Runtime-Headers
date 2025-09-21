@class SUIBBridgedMatch;

@interface SUIBRegexMatch : NSObject

@property (readonly, nonatomic) SUIBBridgedMatch *bridgedMatch;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void).cxx_destruct;
- (id)captured;
- (id)initWithBridgedMatch:(id)a0;

@end
