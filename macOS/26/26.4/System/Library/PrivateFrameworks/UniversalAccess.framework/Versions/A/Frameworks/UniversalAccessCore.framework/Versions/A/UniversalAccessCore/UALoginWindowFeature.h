@class NSString;

@interface UALoginWindowFeature : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic) BOOL willCopyUsersPreferences;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)description;

@end
