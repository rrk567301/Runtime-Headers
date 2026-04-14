@class NSData, NSPersistentHistoryToken;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSPersistentHistoryToken *token;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long sequenceNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithPersistentHistoryToken:(id)a0;

@end
