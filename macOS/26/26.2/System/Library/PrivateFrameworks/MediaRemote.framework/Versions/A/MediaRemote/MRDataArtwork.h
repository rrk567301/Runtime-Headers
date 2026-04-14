@class NSData;

@interface MRDataArtwork : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;

- (id)initWithImageData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProtobuf:(id)a0;

@end
