@class NSString, NSDate;

@interface FBKInstalledApp : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSDate *lastUsed;
@property (retain, nonatomic) NSString *path;

+ (id)_searchIdentifierInAppURL:(id)a0;
+ (id)_searchVersionInAppURL:(id)a0 identifier:(id)a1;
+ (id)appWithUrl:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (char)isAppleApp;
- (char)_isInstalledIn:(id)a0;
- (char)isIWorkApp;
- (char)isInstalledIn:(unsigned long long)a0;

@end
