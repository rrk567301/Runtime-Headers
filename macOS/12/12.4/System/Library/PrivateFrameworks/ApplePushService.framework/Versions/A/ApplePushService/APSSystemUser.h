@class NSString;

@interface APSSystemUser : NSObject {
    NSString *_status;
    BOOL _daemonUser;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *status;

+ (id)systemUserWithUID:(unsigned int)a0;
+ (id)systemUserWithUserID:(id)a0;
+ (id)allConsoleUserIDs;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)updateStatus;
- (BOOL)isLoggedIn;
- (id)initWithUserID:(id)a0;
- (BOOL)isDaemonUser;
- (BOOL)isLoggedOut;

@end
