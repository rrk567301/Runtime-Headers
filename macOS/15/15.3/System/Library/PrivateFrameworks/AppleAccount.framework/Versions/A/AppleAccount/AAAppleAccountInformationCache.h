@class NSString;

@interface AAAppleAccountInformationCache : NSObject

@property (readonly) BOOL isSignedIn;
@property (readonly, nonatomic) NSString *accountFullName;
@property (readonly, nonatomic) NSString *profilePictureCacheURL;

- (id)init;
- (void).cxx_destruct;

@end
