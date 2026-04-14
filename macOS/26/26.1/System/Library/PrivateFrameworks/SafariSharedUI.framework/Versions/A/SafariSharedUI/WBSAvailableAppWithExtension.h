@class NSString;

@interface WBSAvailableAppWithExtension : NSObject

@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *platformSpecificBundleID;
@property (copy, nonatomic) NSString *requiredTeamID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAdamID:(id)a0 platformSpecificBundleID:(id)a1;

@end
