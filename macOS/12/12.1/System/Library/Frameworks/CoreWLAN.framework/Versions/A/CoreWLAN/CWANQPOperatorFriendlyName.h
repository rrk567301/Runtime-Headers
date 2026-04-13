@class NSArray;

@interface CWANQPOperatorFriendlyName : CWANQPElement <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *operatorFriendlyNameList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 anqpResult:(id)a2;

@end
