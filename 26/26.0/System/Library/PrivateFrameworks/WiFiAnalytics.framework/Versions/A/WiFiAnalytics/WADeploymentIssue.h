@class NSString;

@interface WADeploymentIssue : NSObject

@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) unsigned long long type;

+ (id)issueWithType:(unsigned long long)a0 ssid:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;

@end
