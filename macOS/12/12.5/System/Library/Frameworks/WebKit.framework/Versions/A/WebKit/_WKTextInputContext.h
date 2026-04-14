@interface _WKTextInputContext : NSObject <NSCopying> {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } m_size; } boundingRect; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long m_identifier; } webPageIdentifier; struct ProcessQualified<WTF::ObjectIdentifier<WebCore::ScriptExecutionContextIdentifierType>> { struct ObjectIdentifier<WebCore::ScriptExecutionContextIdentifierType> { unsigned long long m_identifier; } m_object; struct ObjectIdentifier<WebCore::ProcessIdentifierType> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long m_identifier; } elementIdentifier; } _textInputContext;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id).cxx_construct;
- (const void *)_textInputContext;
- (id)_initWithTextInputContext:(const void *)a0;

@end
