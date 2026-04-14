@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> { struct DataSegment *m_ptr; } _dataSegment;
    unsigned long long _position;
    unsigned long long _size;
}

+ (void)initialize;

- (const void *)bytes;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDataSegment:(const void *)a0 position:(unsigned long long)a1 size:(unsigned long long)a2;

@end
