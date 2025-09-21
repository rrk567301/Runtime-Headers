@class NSArray, NSString;

@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *entities;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntities:(id)a0;

@end
