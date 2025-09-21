@class NSString;

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProviding, TSWPStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fill;
- (struct CGSize { double x0; double x1; })minimumSize;
- (int)wrapType;
- (id)styleProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (char)allowsConnections;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (Class)repClassOverride;
- (char)shouldDisplayGuides;
- (char)canBeIntersected;
- (char)canResetTextAndObjectHandles;
- (id)listStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (char)shouldBeDisplayedInShowMode;
- (char)supportsRotation;
- (id)dropCapStyleAtParIndex:(unsigned long long)a0;
- (id)styleProviderForTextLayout:(id)a0;
- (id)textPropertiesForEquation:(id)a0 basedOnProperties:(id)a1;
- (char)wantsToProvideStylesForTextLayout:(id)a0;
- (id)commentInfo;

@end
