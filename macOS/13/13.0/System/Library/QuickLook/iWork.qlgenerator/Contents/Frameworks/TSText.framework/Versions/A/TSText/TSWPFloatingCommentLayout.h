@class NSString;

@interface TSWPFloatingCommentLayout : TSWPShapeLayout <TSWPStyleProviding, TSWPStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)fill;
- (int)wrapType;
- (id)styleProvider;
- (id)paragraphStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)characterStyleAtCharIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (Class)repClassOverride;
- (BOOL)shouldDisplayGuides;
- (BOOL)allowsConnections;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)supportsRotation;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (id)listStyleAtParIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)styleProviderForTextLayout:(id)a0;
- (BOOL)wantsToProvideStylesForTextLayout:(id)a0;
- (id)dropCapStyleAtParIndex:(unsigned long long)a0;
- (id)textPropertiesForEquation:(id)a0 basedOnProperties:(id)a1;
- (id)commentInfo;

@end
