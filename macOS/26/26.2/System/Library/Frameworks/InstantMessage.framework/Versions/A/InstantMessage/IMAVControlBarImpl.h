@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;

- (id)controls;
- (void)addControl:(id)a0;
- (void)removeControl:(id)a0;
- (id)_dictionaryRepresentation;
- (id)init;
- (void)_controlDidChange:(id)a0;
- (void)_deferredControlSync;
- (void)removeAllControls;

@end
