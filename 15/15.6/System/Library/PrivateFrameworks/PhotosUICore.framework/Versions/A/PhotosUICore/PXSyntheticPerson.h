@class NSString;

@interface PXSyntheticPerson : NSObject <PXPerson> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ px_localIdentifier;
}

@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *px_localizedName;
@property (nonatomic, readonly) NSString *px_longStyleLocalizedName;
@property (nonatomic, readonly) NSString *px_localIdentifier;
@property (nonatomic, readonly) char isVerified;
@property (nonatomic, readonly) char isPersonModel;
@property (nonatomic, readonly) short detectionType;
@property (nonatomic, readonly) char px_isHuman;
@property (nonatomic, readonly) char px_isPet;

+ (void)px_loadRepresentativeFacesForPersons:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 cropFactor:(long long)a2 style:(long long)a3 cacheResult:(char)a4 synchronous:(char)a5 resultHandler:(id /* block */)a6;

@end
