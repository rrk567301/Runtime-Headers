@class NSString, RETXRBuffer;

@interface RETXRTextureProvider : NSObject <TXRDataSourceProvider> {
    RETXRBuffer *_buffer;
    unsigned long long _pixelFormat;
    unsigned long long _bytesPerTexel;
    void /* unknown type, empty encoding */ _size;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
