@class NSString;

@interface _WKJSBuffer : NSObject <WKObject> {
    struct AlignedStorage<API::JSBuffer, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _buffer;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithDataInFile:(id)a0;

@end
