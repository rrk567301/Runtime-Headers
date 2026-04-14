@class NSData, NSDate;

@interface SKPresenceChannel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *cachedDateCreated;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDate *dateCreated;

+ (id)logger;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
