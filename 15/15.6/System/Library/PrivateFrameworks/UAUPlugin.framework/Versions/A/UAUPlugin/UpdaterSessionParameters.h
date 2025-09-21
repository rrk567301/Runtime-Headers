@class NSURL, NSString;

@interface UpdaterSessionParameters : NSObject <NSCopying>

@property (retain) NSURL *homeDirectory;
@property char accountWasMigrated;
@property char updateIsFLO;
@property (retain) NSString *previousOSVersion;
@property (retain) NSString *currentOSVersion;
@property (retain) NSString *previousOSBuild;
@property (retain) NSString *currentOSBuild;
@property unsigned int userID;
@property unsigned int groupID;
@property (readonly) char newUser;

+ (long long)compareSpecificOSVersion:(id)a0 toSpecificOSVersion:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)compareOSVersion;
- (long long)compareSpecificOSVersion:(id)a0 toSpecificOSVersion:(id)a1;
- (long long)compareToSpecificOSVersion:(id)a0;

@end
