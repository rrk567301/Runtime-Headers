@class NSUUID, CXJoinCallActivity, NSDate;

@interface CXJoinCallActivitySession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) CXJoinCallActivity *activity;
@property (nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivity:(id)a0;
- (char)isEqualToJoinCallActivitySession:(id)a0;

@end
