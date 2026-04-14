@class NSString, NSData;

@interface SCMLBinSerializerImageFrame : NSObject

@property (retain) NSString *recordID;
@property (retain) NSData *imageData;

- (id)name;
- (void).cxx_destruct;
- (id)data;
- (id)initWithKey:(id)a0 value:(id)a1;
- (struct __CVBuffer { } *)pixelBuffer;
- (struct CGImage { } *)cgImage;
- (id)ciImage;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(id)a0;

@end
