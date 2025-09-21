@class NSArray, NSString, SIRINLUTurnContext;

@interface SIRINLUTurnInput : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *asrOutputs;
@property (retain, nonatomic) NSArray *systemDialogActs;
@property (retain, nonatomic) NSArray *activeTasks;
@property (retain, nonatomic) NSArray *executedTasks;
@property (retain, nonatomic) NSArray *salientEntities;
@property (retain, nonatomic) SIRINLUTurnContext *turnContext;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) char tapToEdit;
@property (nonatomic) unsigned long long startTimestamp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAsrOutputs:(id)a0 salientEntities:(id)a1 turnContext:(id)a2;
- (id)initWithAsrOutputs:(id)a0 salientEntities:(id)a1 turnContext:(id)a2 locale:(id)a3 tapToEdit:(char)a4 startTimestamp:(unsigned long long)a5;
- (id)initWithAsrOutputs:(id)a0 systemDialogActs:(id)a1 activeTasks:(id)a2 executedTasks:(id)a3 salientEntities:(id)a4;

@end
