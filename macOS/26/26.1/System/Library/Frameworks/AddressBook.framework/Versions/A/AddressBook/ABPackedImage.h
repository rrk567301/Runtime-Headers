@class NSString, NSMutableDictionary;

@interface ABPackedImage : NSImage {
    NSString *_path;
    NSMutableDictionary *_rectMap;
    NSMutableDictionary *_cached;
}

+ (id)packedImageNamed:(id)a0 inBundle:(id)a1;
+ (id)startupImages;

- (id)initWithContentsOfFile:(id)a0;
- (id)path;
- (id)imageWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)packedDataRepresentation;

@end
