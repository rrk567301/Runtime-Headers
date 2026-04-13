@class NSData, NSDictionary;

@interface MRArtwork : NSObject <NSCopying>

@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)initWithImageData:(id)a0 height:(long long)a1 width:(long long)a2;

@end
