@class GEOMapsURLShortener;

@interface MKURLShortener : NSObject {
    GEOMapsURLShortener *_serviceProvider;
}

@property (nonatomic) unsigned int options;

- (id)init;
- (void).cxx_destruct;
- (void)lengthenURL:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)shortenURL:(id)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)shortenURLForShareSheet:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
