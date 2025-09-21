@class NSString, USOSerializedGraph;

@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) USOSerializedGraph *reference;
@property (retain, nonatomic) NSString *renderedText;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReference:(id)a0;

@end
