@class LNValue, LNEntityMetadata;

@interface LNStageContextRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LNEntityMetadata *metadata;
@property (retain, nonatomic) LNValue *entities;

+ (id)xpcClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0 entities:(id)a1;

@end
