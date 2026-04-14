@class NSString, NSURL;

@interface EWSAutodiscoverResponse : NSObject

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *internalURL;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) NSURL *autodiscoverURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDisplayName:(id)a0 internalURL:(id)a1 externalURL:(id)a2 autodiscoverURL:(id)a3;

@end
