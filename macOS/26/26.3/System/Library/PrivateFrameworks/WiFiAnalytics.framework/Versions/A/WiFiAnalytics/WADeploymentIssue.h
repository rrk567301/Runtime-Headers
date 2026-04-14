@class NSString;

@interface WADeploymentIssue : NSObject

@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) unsigned long long type;

+ (id)issueWithType:(unsigned long long)a0 ssid:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;

@end
