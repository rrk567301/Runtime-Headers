@interface ICCalculatePreviewBehaviorMenu : NSObject {
    void /* unknown type, empty encoding */ allBehaviors;
}

@property (nonatomic, weak) void /* function */ note;
@property (nonatomic, readonly) BOOL isMathEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectCalculatePreviewBehavior:(id)a0;
- (id)initWithNote:(id)a0 isMathEnabled:(BOOL)a1;
- (id)makeMenuItem;

@end
