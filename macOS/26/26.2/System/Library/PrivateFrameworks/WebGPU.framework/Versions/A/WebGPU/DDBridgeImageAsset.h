@class NSData, NSString;

@interface DDBridgeImageAsset : NSObject {
    void /* function */ data;
    void /* function */ path;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long bytesPerPixel;
@property (nonatomic, readonly) int semantic;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bytesPerPixel:(unsigned long long)a3 semantic:(int)a4 path:(id)a5;

@end
