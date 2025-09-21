@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;

- (void)removeControl:(id)a0;
- (void)addControl:(id)a0;
- (id)controls;
- (id)init;
- (id)_dictionaryRepresentation;
- (void)_controlDidChange:(id)a0;
- (void)_deferredControlSync;
- (void)removeAllControls;

@end
