@class NSArray, NSString, INImageBundle;

@interface INImageFilePersistence : NSObject <INImageStoring> {
    INImageBundle *_imageBundle;
}

@property (copy, nonatomic, setter=_setSupportedClasses:) NSArray *_supportedClasses;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_deleteItemAtFilePath:(id)a0;
- (id)_filePathForImageWithFileName:(id)a0;
- (BOOL)canStoreImage:(id)a0;
- (void)purgeExpiredImagesInEphemeralStore;
- (void)purgeImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)storeImage:(id)a0 scaled:(BOOL)a1 qualityOfService:(unsigned int)a2 storeType:(unsigned long long)a3 error:(id *)a4;

@end
