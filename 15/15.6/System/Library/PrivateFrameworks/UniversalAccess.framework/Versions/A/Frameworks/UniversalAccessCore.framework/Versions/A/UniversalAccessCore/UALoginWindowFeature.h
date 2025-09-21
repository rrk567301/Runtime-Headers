@class NSString;

@interface UALoginWindowFeature : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic) char willCopyUsersPreferences;
@property (nonatomic) char enabled;

- (id)description;
- (void).cxx_destruct;

@end
