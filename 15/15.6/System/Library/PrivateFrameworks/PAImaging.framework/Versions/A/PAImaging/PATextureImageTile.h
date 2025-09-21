@class NSString, PATextureImageBacking;

@interface PATextureImageTile : NSObject <PAMutableImageTile> {
    PATextureImageBacking *_backing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (char)readBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (char)writeBufferRegion:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithBacking:(id)a0;
- (char)readTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;
- (char)writeTextureRegion:(id)a0 withContext:(id)a1 block:(id /* block */)a2;

@end
