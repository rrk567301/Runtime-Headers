@class NSString, NSArray, MIStoreMetadataDistributor, NSData;

@interface LSiTunesMetadata : NSObject <NSSecureCoding> {
    MIStoreMetadataDistributor *_distributorInfo;
    NSData *_protectedMetadata;
    id _decryptedProtectedMetadataOrError;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long storeItemIdentifier;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) unsigned long long versionIdentifier;
@property (readonly, nonatomic) unsigned long long betaVersionIdentifier;
@property (readonly, nonatomic) unsigned long long storeFront;
@property (readonly, nonatomic) NSString *storeCohort;
@property (readonly, nonatomic) NSString *variantID;
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) unsigned long long genreIdentifier;
@property (readonly, nonatomic) NSArray *subgenres;
@property (readonly, nonatomic) unsigned long long ratingRank;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSString *sourceApp;
@property (readonly, nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic, getter=wasGameCenterEverEnabled) BOOL gameCenterEverEnabled;
@property (readonly, nonatomic) NSString *managementDeclarationIdentifier;
@property (readonly, nonatomic) MIStoreMetadataDistributor *distributorInfo;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned int x21; unsigned short x22; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x23; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; } x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; int x20; unsigned int x21; struct LSVersionNumber { unsigned char x0[32]; } x22; struct LSVersionNumber { unsigned char x0[32]; } x23; unsigned int x24; int x25; struct LSVersionNumber { unsigned char x0[32]; } x26; unsigned long long x27; unsigned long long x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned long long x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned long long x45; unsigned long long x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned long long x50; unsigned int x51; unsigned long long x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; unsigned int x60; unsigned int x61; unsigned int x62; unsigned int x63; unsigned int x64; unsigned int x65; unsigned int x66; unsigned int x67; unsigned int x68; unsigned int x69; unsigned char x70; unsigned char x71; unsigned char x72; unsigned int x73; unsigned int x74[0]; unsigned int x75; unsigned int x76; int x77; unsigned int x78; unsigned int x79; unsigned int x80; unsigned int x81; unsigned int x82; unsigned int x83; } *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)storeCohortWithError:(id *)a0;

@end
