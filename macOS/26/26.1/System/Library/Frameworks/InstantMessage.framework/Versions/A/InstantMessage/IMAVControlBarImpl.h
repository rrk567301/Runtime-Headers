@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;

- (void)removeControl:(id)a0;
- (id)controls;
- (id)_dictionaryRepresentation;
- (void)addControl:(id)a0;
- (id)init;
- (void)_controlDidChange:(id)a0;
- (void)_deferredControlSync;
- (void)removeAllControls;

@end
