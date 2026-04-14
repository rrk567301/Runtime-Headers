@class LNValue, NSError;

@interface LNStageContextResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LNValue *result;
@property (retain, nonatomic) NSError *error;

+ (id)xpcClasses;

- (id)initWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
