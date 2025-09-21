@class NSString;

@interface SIRINLURRGroupIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *groupId;
@property int seq;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupId:(id)a0 seq:(int)a1;

@end
