@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken;
@property (readonly, nonatomic) int version;

+ (int)currentVersion;
+ (id)currentTokenForContext:(id)a0;
+ (id)tokenWithPersistentHistoryToken:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0;
- (char)isEqualToPersistentChangeToken:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0 version:(int)a1;

@end
