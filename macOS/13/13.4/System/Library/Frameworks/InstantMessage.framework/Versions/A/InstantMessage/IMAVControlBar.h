@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (id)_dictionaryRepresentation;
- (id)controls;
- (void)addControl:(id)a0;
- (void)removeAllControls;
- (void)removeControl:(id)a0;

@end
