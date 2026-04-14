@class NSString;

@interface BDSICloudIdentityToken : NSObject

@property (copy, nonatomic) NSString *token;

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;
+ (id)tokenForCurrentIdentityIfICloudDriveEnabled;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithToken:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_hashFor:(id)a0;
- (id)initFromArchive:(id)a0;
- (id)initWithCurrentIdentity;

@end
