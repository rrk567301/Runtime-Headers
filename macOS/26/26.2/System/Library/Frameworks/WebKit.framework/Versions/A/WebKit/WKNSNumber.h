@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {
    unsigned char _type;
    union { struct AlignedStorage<API::Boolean, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _boolean; struct AlignedStorage<API::Double, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _double; struct AlignedStorage<API::UInt64, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _uint64; struct AlignedStorage<API::Int64, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _int64; } _number;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)longLongValue;
- (char)charValue;
- (void)getValue:(void *)a0;
- (const char *)objCType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)unsignedLongLongValue;
- (double)doubleValue;
- (void)dealloc;

@end
