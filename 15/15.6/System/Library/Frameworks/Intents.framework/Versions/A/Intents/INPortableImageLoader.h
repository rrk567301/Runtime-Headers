@class NSString;
@protocol INPortableImageLoaderHelping;

@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id<INPortableImageLoaderHelping> helper;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_helperClassName;
- (char)canLoadImageDataForImage:(id)a0;
- (void)filePathForImage:(id)a0 completion:(id /* block */)a1;
- (void)filePathForImage:(id)a0 usingPortableImageLoader:(id)a1 completion:(id /* block */)a2;
- (void)loadDataImageFromImage:(id)a0 usingPortableImageLoader:(id)a1 scaledSize:(struct { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)loadImageDataFromImage:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;

@end
