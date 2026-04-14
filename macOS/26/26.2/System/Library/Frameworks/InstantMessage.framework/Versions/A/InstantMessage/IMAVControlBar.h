@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (id)controls;
- (void)addControl:(id)a0;
- (void)removeControl:(id)a0;
- (id)_dictionaryRepresentation;
- (void)removeAllControls;

@end
