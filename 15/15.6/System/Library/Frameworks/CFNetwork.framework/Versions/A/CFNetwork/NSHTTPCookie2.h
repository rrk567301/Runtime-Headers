@class NSString, NSDate;

@interface NSHTTPCookie2 : NSObject <NSCopying, NSMutableCopying> {
    NSString *_etldPlusOne;
    unsigned long long _sCreationDate;
    unsigned long long _sExpirationDate;
    unsigned long long _sLastAccessTime;
    char _session;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;
@property (readonly) NSString *domain;
@property (readonly) NSString *path;
@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *expirationDate;
@property (readonly) char sesion;
@property (readonly) char secure;
@property (readonly) char httpOnly;
@property (readonly) char hostOnly;
@property (readonly) NSString *partition;
@property (readonly) long long source;
@property (readonly) long long sameSite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2;

@end
