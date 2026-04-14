@interface _MonitorState : NSObject {
    BOOL _isMonitoring;
    BOOL _shouldBeMonitoring;
}

- (void)setMonitoring:(BOOL)a0;
- (id)init;
- (BOOL)isMonitoring;
- (BOOL)shouldBeMonitoring;
- (void)setShouldBeMonitoring:(BOOL)a0;

@end
