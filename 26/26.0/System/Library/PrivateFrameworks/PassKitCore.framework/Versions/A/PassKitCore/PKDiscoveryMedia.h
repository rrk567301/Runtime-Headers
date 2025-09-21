@class NSString, NSDictionary, PKColor, NSBundle, NSURL;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding> {
    NSURL *_bundleURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *urls;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (readonly, nonatomic) NSString *bundleImageName;
@property (retain, nonatomic) NSBundle *bundle;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_remoteAssetForScale:(double)a0;
- (void)downloadImageDataWithScale:(double)a0 shouldWriteData:(BOOL)a1 completion:(id /* block */)a2;
- (id)imageDataFromCacheWithScale:(double)a0;

@end
