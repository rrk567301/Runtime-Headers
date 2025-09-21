@interface PHAContextualPromptSuggestionTask : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ shouldRecordCompletion;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ periodicity;
    void /* unknown type, empty encoding */ incrementalKey;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ taskProductivityReporter;
    void /* unknown type, empty encoding */ recordsInserted;
    void /* unknown type, empty encoding */ staleEntryAge;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ loggerEvents;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ promptProvider;
    void /* unknown type, empty encoding */ persister;
}

- (id)init;
- (void).cxx_destruct;

@end
