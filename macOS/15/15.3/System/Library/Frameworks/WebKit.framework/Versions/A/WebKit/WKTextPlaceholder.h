@interface WKTextPlaceholder : NSTextPlaceholder {
    struct ElementContext { struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } boundingRect; struct Markable<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No>, WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No>::MarkableTraits> { struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No> { unsigned long long m_identifier; } m_value; } webPageIdentifier; struct ProcessQualified<WTF::UUID> { struct UUID { unsigned __int128 m_data; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::Yes> { unsigned long long m_identifier; } m_processIdentifier; } documentIdentifier; struct Markable<WTF::ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No>, WTF::ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No>::MarkableTraits> { struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long, WTF::SupportsObjectIdentifierNullState::No> { unsigned long long m_identifier; } m_value; } elementIdentifier; } _elementContext;
}

@property (readonly, nonatomic) const void *elementContext;

- (id).cxx_construct;
- (id)rects;
- (id)initWithElementContext:(const void *)a0;

@end
