@class NSString;

@interface CRFormTextFieldOutputRegion : CRFormFieldOutputRegion

@property (readonly) unsigned long long textContentType;
@property (readonly) NSString *textContentTypeString;
@property (readonly) unsigned long long maxCharacterCount;
@property (readonly) double suggestedLineHeight;
@property (readonly) char autofillNewContextStart;

- (char)isEqual:(id)a0;
- (unsigned long long)fieldType;
- (void)setTextContentType:(unsigned long long)a0;
- (void)setAutofillNewContextStart:(char)a0;
- (void)setSuggestedLineHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithQuad:(id)a0 labelRegion:(id)a1 subFields:(id)a2 contentType:(unsigned long long)a3 source:(unsigned long long)a4;
- (id)initWithQuad:(id)a0 labelRegion:(id)a1 subFields:(id)a2 contentType:(unsigned long long)a3 source:(unsigned long long)a4 hasBoundedWidth:(char)a5 hasBoundedHeight:(char)a6;
- (void)setMaxCharacterCount:(unsigned long long)a0;

@end
