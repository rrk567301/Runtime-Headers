@class NSString, NSDictionary;

@interface EKDirectoryRecord : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *preferredAddress;
@property (copy, nonatomic) NSString *principalPath;
@property (readonly) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;

@end
