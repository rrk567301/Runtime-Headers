@class NSString, RETXRBufferMap;

@interface RETXRBuffer : NSObject <TXRBuffer, NSCopying> {
    RETXRBufferMap *_bufferMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
