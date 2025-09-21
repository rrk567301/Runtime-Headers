@interface PLDuplicateDetectorLivePhotoContextData : NSObject

@property short subtype;
@property char isSharedLibrary;
@property (readonly) unsigned long long hash;

+ (id)dataWithSubtype:(short)a0 isSharedLibrary:(char)a1;

- (id)description;
- (char)isEqual:(id)a0;

@end
