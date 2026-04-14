@interface SiriMessageTypes.FlowOutputMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ invocationId;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ commandExecutionInfo;
    void /* unknown type, empty encoding */ systemDialogActs;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ completedTasks;
    void /* unknown type, empty encoding */ legacyContext;
    void /* unknown type, empty encoding */ listenAfterSpeaking;
}

- (void).cxx_destruct;

@end
