@class NSString, NSArray, PHPhotoLibrary;

@interface PHCloudIdentifier : NSObject <NSCopying, NSSecureCoding> {
    PHPhotoLibrary *_photoLibrary;
    NSArray *_extraArchivalComponents;
}

@property (class, readonly, nonatomic) PHCloudIdentifier *notFoundIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *archivalStringValue;
@property (readonly, nonatomic) NSString *identifierCode;
@property (readonly, nonatomic) NSString *stableHash;
@property (readonly, nonatomic) NSString *localCloudIdentifier;
@property (readonly, nonatomic) NSString *stringValue;

+ (BOOL)_decodeLibraryForCloudIdentifier:(id)a0 libraryIdentifier:(id *)a1 libraryURL:(id *)a2 wellKnownLibraryIdentifier:(long long *)a3 photoLibrary:(id *)a4 error:(id *)a5;
+ (id)_notFoundIdentifier;
+ (id)photoLibraryForCloudIdentifier:(id)a0 error:(id *)a1;
+ (id)photoLibraryIdentifierForCloudIdentifier:(id)a0 error:(id *)a1;
+ (id)photoLibraryURLForCloudIdentifier:(id)a0 error:(id *)a1;
+ (long long)wellKnownPhotoLibraryIdentifierForCloudIdentifier:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)_extraComponentsForLibraryURL;
- (id)_generateExtraArchivalComponents;
- (id)initAsNotFoundIdentifier;
- (id)initWithArchivalStringValue:(id)a0;
- (id)initWithLocalCloudIdentifier:(id)a0 identifierCode:(id)a1 stableHash:(id)a2 extraArchivalStringComponents:(id)a3 photoLibrary:(id)a4;

@end
