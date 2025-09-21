@class NSString;
@protocol SIRINLUUserDialogAct;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SIRINLUUserDialogAct> offeredAct;
@property (retain, nonatomic) NSString *renderedText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOfferedAct:(id)a0;

@end
