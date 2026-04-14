@interface ICCalculatePreviewBehaviorMenu : NSObject {
    void /* unknown type, empty encoding */ allBehaviors;
}

@property (nonatomic, weak) void /* function */ note;
@property (nonatomic, readonly) BOOL isMathEnabled;

- (void).cxx_destruct;
- (id)init;
- (void)didSelectCalculatePreviewBehavior:(id)a0;
- (id)initWithNote:(id)a0 isMathEnabled:(BOOL)a1;
- (id)makeMenuItem;

@end
