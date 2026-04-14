@class NSString;

@interface MPStateOperation : MPAction

@property (copy, nonatomic) NSString *operation;
@property (copy, nonatomic) NSString *stateKey;

+ (BOOL)supportsSecureCoding;
+ (id)stateOperation;

- (void)setAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
