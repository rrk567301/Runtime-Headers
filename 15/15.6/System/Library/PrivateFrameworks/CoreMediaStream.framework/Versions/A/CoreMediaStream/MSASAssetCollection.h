@class NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long photoNumber;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) char isDeletable;
@property (nonatomic) char isMine;
@property (nonatomic) char hasComments;

+ (id)assetCollectionWithAssetCollection:(id)a0;
+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isVideo;
- (char)isAutoloopVideo;
- (char)isPhotoIris;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;
- (id)mediaAssetType;
- (id)MSASPProtocolDictionary;
- (char)hasVideoAsset;
- (id)initWithFileName:(id)a0 path:(id)a1;

@end
