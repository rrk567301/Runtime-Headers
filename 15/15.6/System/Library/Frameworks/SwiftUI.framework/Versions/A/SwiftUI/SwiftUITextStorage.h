@interface SwiftUITextStorage : NSConcreteTextStorage

@property (nonatomic, setter=_setBaselineDelta:) double _baselineDelta;
@property (nonatomic, setter=_setForceWordWrapping:) char _forceWordWrapping;
@property (nonatomic, setter=_setWrappedByCluster:) char _wrappedByCluster;
@property (nonatomic) double defaultTighteningFactor;

- (char)_shouldSetOriginalFontAttribute;
- (char)_baselineMode;
- (char)_isStringDrawingTextStorage;

@end
