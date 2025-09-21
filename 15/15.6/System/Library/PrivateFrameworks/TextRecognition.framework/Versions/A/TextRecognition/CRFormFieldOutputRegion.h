@class CRNormalizedQuad, NSString, CROutputRegion, NSMutableDictionary;
@protocol CRFormFieldProviding;

@interface CRFormFieldOutputRegion : CROutputRegion <CRFormFieldProviding> {
    id<CRFormFieldProviding> _precedingExternalField;
    NSMutableDictionary *_debugInfo;
}

@property char hasBoundedWidth;
@property char hasBoundedHeight;
@property unsigned long long indexInGlobalOrder;
@property (readonly) CROutputRegion *labelRegion;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long fieldType;
@property (readonly) unsigned long long fieldSource;
@property (readonly, copy) NSString *fieldValue;
@property (readonly) unsigned long long maxCharacterCount;
@property unsigned long long textContentType;
@property double suggestedLineHeight;
@property char autofillNewContextStart;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)source;
- (id)debugInfo;
- (void)setLabelRegion:(id)a0;
- (char)shouldComputeBoundsFromChildren;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithQuad:(id)a0 labelRegion:(id)a1 subFields:(id)a2 source:(unsigned long long)a3;
- (id)precedingExternalField;
- (void)setPrecedingExternalField:(id)a0;

@end
