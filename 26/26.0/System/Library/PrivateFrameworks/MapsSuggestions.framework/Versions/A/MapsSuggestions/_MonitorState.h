@interface _MonitorState : NSObject {
    BOOL _isMonitoring;
    BOOL _shouldBeMonitoring;
}

- (void)setMonitoring:(BOOL)a0;
- (BOOL)isMonitoring;
- (id)init;
- (BOOL)shouldBeMonitoring;
- (void)setShouldBeMonitoring:(BOOL)a0;

@end
