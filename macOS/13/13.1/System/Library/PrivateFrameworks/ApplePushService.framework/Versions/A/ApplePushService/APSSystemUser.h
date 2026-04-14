@class NSString;

@interface APSSystemUser : NSObject {
    NSString *_status;
    BOOL _daemonUser;
}

@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *status;

+ (id)systemUserWithUserID:(id)a0;
+ (id)systemUserWithUID:(unsigned int)a0;
+ (id)allConsoleUserIDs;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)updateStatus;
- (id)initWithUserID:(id)a0;
- (BOOL)isLoggedIn;
- (BOOL)isLoggedOut;
- (BOOL)isDaemonUser;

@end
