@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;

- (id)_dictionaryRepresentation;
- (void)removeControl:(id)a0;
- (id)controls;
- (void)addControl:(id)a0;
- (id)init;
- (void)_controlDidChange:(id)a0;
- (void)_deferredControlSync;
- (void)removeAllControls;

@end
