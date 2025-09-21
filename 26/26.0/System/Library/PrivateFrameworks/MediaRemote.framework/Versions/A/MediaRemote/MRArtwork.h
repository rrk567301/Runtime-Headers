@class NSData, NSDictionary;

@interface MRArtwork : NSObject <NSCopying>

@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)generateArtworkDataWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)processRequestsExternalArtworkValidation;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImageData:(id)a0 height:(long long)a1 width:(long long)a2;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)artworkByResizingWithWidth:(long long)a0 height:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
