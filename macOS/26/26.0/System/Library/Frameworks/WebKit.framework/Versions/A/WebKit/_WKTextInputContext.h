@interface _WKTextInputContext : NSObject <NSCopying> {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct Markable<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::MarkableTraits<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>>> { struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } webPageIdentifier; struct Markable<WebCore::ProcessQualified<WTF::UUID>, WTF::MarkableTraits<WebCore::ProcessQualified<UUID>>> { struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_processIdentifier; } m_value; } documentIdentifier; struct Markable<WTF::ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::MarkableTraits<WTF::ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>>> { struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } elementIdentifier; } _textInputContext;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithTextInputContext:(const void *)a0;
- (const void *)_textInputContext;

@end
