@class NSUUID, NSDate;

@interface IDSIDQueryCallbackInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSUUID *queryID;

- (id)description;
- (id)initWithTimestamp:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(id)a0 queryID:(id)a1;

@end
