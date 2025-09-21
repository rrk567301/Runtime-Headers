@class NSURL, NSString;

@interface _SWHighlightMentionEvent : SWHighlightMentionEvent <_SWHighlightEventProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithHighlight:(id)a0 mentionedPerson:(id)a1;

@end
