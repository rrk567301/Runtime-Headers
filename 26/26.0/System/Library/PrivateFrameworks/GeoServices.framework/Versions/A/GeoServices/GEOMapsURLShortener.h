@class GEOXPCConnection;

@interface GEOMapsURLShortener : NSObject {
    GEOXPCConnection *_xpcConnection;
}

@property double requestTimeout;
@property unsigned int options;

- (id)init;
- (void).cxx_destruct;
- (void)fullURLForShortenedURL:(id)a0 completion:(id /* block */)a1;
- (void)shortenedURLForFullURL:(id)a0 completion:(id /* block */)a1;

@end
