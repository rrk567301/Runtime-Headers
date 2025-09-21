@class NSString;

@interface BDSICloudIdentityToken : NSObject

@property (copy, nonatomic) NSString *token;

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;
+ (id)tokenForCurrentIdentityIfICloudDriveEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (id)_hashFor:(id)a0;
- (id)initFromArchive:(id)a0;
- (id)initWithCurrentIdentity;

@end
