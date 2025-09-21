@class INImage, NSString, NSMutableDictionary;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, setter=_setImageTypeToStore:) long long _imageTypeToStore;
@property (copy, nonatomic) INImage *keyImage;
@property (copy, nonatomic) NSString *proxyIdentifier;
@property (copy, nonatomic) NSMutableDictionary *keyImagesByType;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)canStoreImage:(id)a0;
- (void)purgeImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)retrieveImageSynchronouslyForIdentifier:(id)a0 error:(id *)a1;
- (void)retrieveImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)storeImage:(id)a0 scaled:(char)a1 qualityOfService:(unsigned int)a2 storeType:(unsigned long long)a3 error:(id *)a4;
- (id)storeImageSynchronously:(id)a0 error:(id *)a1;

@end
