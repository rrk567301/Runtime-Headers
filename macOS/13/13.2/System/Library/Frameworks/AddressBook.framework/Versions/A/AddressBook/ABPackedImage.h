@class NSString, NSMutableDictionary;

@interface ABPackedImage : NSImage {
    NSString *_path;
    NSMutableDictionary *_rectMap;
    NSMutableDictionary *_cached;
}

+ (id)startupImages;
+ (id)packedImageNamed:(id)a0 inBundle:(id)a1;

- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (id)imageWithName:(id)a0;
- (id)packedDataRepresentation;

@end
