@class NSUUID, CXJoinCallActivity, NSDate;

@interface CXJoinCallActivitySession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) CXJoinCallActivity *activity;
@property (nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithActivity:(id)a0;
- (BOOL)isEqualToJoinCallActivitySession:(id)a0;

@end
