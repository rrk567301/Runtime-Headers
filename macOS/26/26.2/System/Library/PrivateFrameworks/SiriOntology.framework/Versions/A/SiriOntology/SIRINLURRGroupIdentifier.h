@class NSString;

@interface SIRINLURRGroupIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *groupId;
@property int seq;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupId:(id)a0 seq:(int)a1;

@end
