@class NSImage, NSString;

@interface TransportInfo : NSObject <NSCopying>

@property (retain) NSImage *image;
@property (retain) NSString *name;

+ (id)imageForType:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualTo:(id)a0;
- (void)dealloc;
- (id)initWithTransportType:(unsigned int)a0 name:(id)a1;

@end
