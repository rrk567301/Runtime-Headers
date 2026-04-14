@class NSData, NSArray, NSError;

@interface KTVerificationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *accountKey;
@property (retain) NSArray *serverLoggableDatas;
@property (retain) NSError *failure;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountKey:(id)a0;
- (id)initWithAccountKey:(id)a0 serverLoggableDatas:(id)a1;

@end
