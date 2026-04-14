@class NSString, USOSerializedGraph;

@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *reference;
@property (retain, nonatomic) NSString *renderedText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0;

@end
