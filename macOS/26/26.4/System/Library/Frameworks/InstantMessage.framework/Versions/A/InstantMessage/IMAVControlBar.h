@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (id)_dictionaryRepresentation;
- (void)removeControl:(id)a0;
- (id)controls;
- (void)addControl:(id)a0;
- (void)removeAllControls;

@end
