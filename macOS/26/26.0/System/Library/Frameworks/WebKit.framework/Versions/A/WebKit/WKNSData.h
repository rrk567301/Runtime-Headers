@class NSString;

@interface WKNSData : NSData <WKObject> {
    struct AlignedStorage<API::Data, 8UL> { struct Storage { unsigned char data[40]; } m_storage; } _data;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
