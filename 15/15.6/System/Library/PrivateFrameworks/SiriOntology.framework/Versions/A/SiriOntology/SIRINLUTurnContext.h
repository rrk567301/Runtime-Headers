@class SIRINLUNLContext, SIRINLULegacyNLContext;

@interface SIRINLUTurnContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SIRINLUNLContext *nlContext;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContext;
@property (retain, nonatomic) SIRINLUNLContext *nlContextNullable;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContextNullable;

+ (id)createEmptyPlaceholderNLContext;
+ (id)createEmptyPlaceholderLegacyNLContext;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyNLContext:(id)a0;
- (id)initWithNLContext:(id)a0;
- (id)initWithNLContext:(id)a0 legacyNLContext:(id)a1;

@end
