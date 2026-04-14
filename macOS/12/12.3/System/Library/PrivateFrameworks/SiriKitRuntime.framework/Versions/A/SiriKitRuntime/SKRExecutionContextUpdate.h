@class NSString;

@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ provideContextCommand;
    void /* unknown type, empty encoding */ nativeFlowContextCommand;
    void /* unknown type, empty encoding */ systemDialogActs;
    void /* unknown type, empty encoding */ nluSystemDialogActs;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ nluActiveTasks;
    void /* unknown type, empty encoding */ completedTasks;
    void /* unknown type, empty encoding */ nluCompletedTasks;
    void /* unknown type, empty encoding */ rrEntities;
    void /* unknown type, empty encoding */ pegasusConversationContext;
    void /* unknown type, empty encoding */ pommesContext;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
