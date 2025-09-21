@class NSArray, NSString, REMChangeToken, NSDate, REMObjectID;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *storeID;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) REMChangeToken *token;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
