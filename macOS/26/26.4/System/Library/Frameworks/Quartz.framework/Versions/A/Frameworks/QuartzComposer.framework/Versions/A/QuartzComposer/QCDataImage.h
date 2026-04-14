@class NSData;

@interface QCDataImage : NSImage {
    NSData *_data;
}

- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFile:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageData;

@end
