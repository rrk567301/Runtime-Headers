@class NSString;

@interface CoreHapticsTools.CHTEvent : NSObject {
    void /* unknown type, empty encoding */ undoRedoManager;
    void /* unknown type, empty encoding */ observerManager;
    void /* function */ type;
    void /* unknown type, empty encoding */ _time;
}

@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)init;

@end
