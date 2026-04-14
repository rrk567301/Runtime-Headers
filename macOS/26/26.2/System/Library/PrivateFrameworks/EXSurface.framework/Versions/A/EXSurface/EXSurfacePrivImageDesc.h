@interface EXSurfacePrivImageDesc : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) long long size;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long bytesPerRow;
@property (nonatomic) long long bytesPerElement;
@property (nonatomic) long long elementWidth;
@property (nonatomic) long long elementHeight;

- (id)initWithLayout:(id)a0;
- (id)initWithOffset:(long long)a0 size:(long long)a1 width:(long long)a2 height:(long long)a3 bytesPerRow:(long long)a4 bytesPerElement:(long long)a5 elementWidth:(long long)a6 elementHeight:(long long)a7;

@end
