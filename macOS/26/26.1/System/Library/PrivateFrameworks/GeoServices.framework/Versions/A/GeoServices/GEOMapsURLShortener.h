@class GEOXPCConnection;

@interface GEOMapsURLShortener : NSObject {
    GEOXPCConnection *_xpcConnection;
}

@property double requestTimeout;
@property unsigned int options;

- (void).cxx_destruct;
- (id)init;
- (void)fullURLForShortenedURL:(id)a0 completion:(id /* block */)a1;
- (void)shortenedURLForFullURL:(id)a0 completion:(id /* block */)a1;

@end
