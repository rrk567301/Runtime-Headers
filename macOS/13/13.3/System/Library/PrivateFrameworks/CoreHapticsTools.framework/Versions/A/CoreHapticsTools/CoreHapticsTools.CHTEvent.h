@class NSString, NSDecimalNumber;

@interface CoreHapticsTools.CHTEvent : NSObject {
    void /* unknown type, empty encoding */ undoRedoManager;
    void /* unknown type, empty encoding */ eventUpdateDelegate;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ time;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) NSDecimalNumber *_time;

- (id)init;
- (void).cxx_destruct;

@end
