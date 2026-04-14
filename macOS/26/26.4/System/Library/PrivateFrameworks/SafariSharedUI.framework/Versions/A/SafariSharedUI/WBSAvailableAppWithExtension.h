@class NSString;

@interface WBSAvailableAppWithExtension : NSObject

@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *platformSpecificBundleID;
@property (copy, nonatomic) NSString *requiredTeamID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAdamID:(id)a0 platformSpecificBundleID:(id)a1;

@end
