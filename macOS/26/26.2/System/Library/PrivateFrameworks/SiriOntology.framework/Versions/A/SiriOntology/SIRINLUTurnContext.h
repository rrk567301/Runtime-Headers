@class SIRINLUNLContext, SIRINLULegacyNLContext;

@interface SIRINLUTurnContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUNLContext *nlContext;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContext;
@property (retain, nonatomic) SIRINLUNLContext *nlContextNullable;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContextNullable;

+ (id)createEmptyPlaceholderNLContext;
+ (id)createEmptyPlaceholderLegacyNLContext;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithLegacyNLContext:(id)a0;
- (id)initWithNLContext:(id)a0;
- (id)initWithNLContext:(id)a0 legacyNLContext:(id)a1;

@end
