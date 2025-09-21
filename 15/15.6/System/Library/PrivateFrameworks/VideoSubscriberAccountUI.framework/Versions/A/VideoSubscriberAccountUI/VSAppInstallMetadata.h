@class NSString;

@interface VSAppInstallMetadata : NSObject

@property (nonatomic, getter=isBeta) char beta;
@property (retain, nonatomic) NSString *sourceApp;
@property (nonatomic, getter=isProfileValidated) char profileValidated;
@property (nonatomic, getter=isManaged) char managed;
@property (readonly, nonatomic) long long installSource;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationRecord:(id)a0;

@end
