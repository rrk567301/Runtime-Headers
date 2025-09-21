@class NSString;

@interface APSSystemUser : NSObject {
    NSString *_status;
    char _daemonUser;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *status;

+ (id)allConsoleUserIDs;
+ (id)systemUserWithUID:(unsigned int)a0;
+ (id)systemUserWithUserID:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)updateStatus;
- (id)initWithUserID:(id)a0;
- (char)isDaemonUser;
- (char)isLoggedIn;
- (char)isLoggedOut;

@end
