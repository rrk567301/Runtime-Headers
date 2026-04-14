@class NSUUID;

@interface ResourceHint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long resourceType;
@property unsigned long long state;
@property (retain, nonatomic) NSUUID *uuid;

- (id)initWithCoder:(id)a0;
- (BOOL)updateState:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResourceType:(unsigned long long)a0 andState:(unsigned long long)a1;

@end
