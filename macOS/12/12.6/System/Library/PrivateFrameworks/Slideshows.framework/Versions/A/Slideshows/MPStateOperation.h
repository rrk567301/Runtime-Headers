@class NSString;

@interface MPStateOperation : MPAction

@property (copy, nonatomic) NSString *operation;
@property (copy, nonatomic) NSString *stateKey;

+ (BOOL)supportsSecureCoding;
+ (id)stateOperation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;

@end
