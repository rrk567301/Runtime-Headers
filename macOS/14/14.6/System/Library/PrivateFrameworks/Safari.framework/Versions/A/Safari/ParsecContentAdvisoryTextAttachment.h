@class NSString;

@interface ParsecContentAdvisoryTextAttachment : NSTextAttachment <ParsecHighlightableTextAttachment>

@property (nonatomic) BOOL shouldSkipHighlighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithString:(id)a0;
- (id)_initWithString:(id)a0 highlightColor:(id)a1;
- (id)highlightedCopyWithHighlightColor:(id)a0;

@end
