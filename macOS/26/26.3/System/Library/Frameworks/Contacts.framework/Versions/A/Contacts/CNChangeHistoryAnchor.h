@class NSData, NSPersistentHistoryToken;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *token;
@property (readonly, nonatomic) NSData *historyToken;
@property (readonly, nonatomic) long long sequenceNumber;

+ (id)log;
+ (id)limitedAccessHistoryAnchor;

- (id)description;
- (id)initWithHistoryToken:(id)a0 error:(id *)a1;
- (long long)compare:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
