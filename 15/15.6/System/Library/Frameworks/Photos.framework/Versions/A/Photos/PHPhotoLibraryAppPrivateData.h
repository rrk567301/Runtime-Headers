@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject

@property (retain) PLAppPrivateData *impl;
@property (weak) PHPhotoLibrary *photoLibrary;

+ (char)accessInstanceVariablesDirectly;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (id)initWithLibrary:(id)a0;
- (char)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (char)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (char)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;

@end
