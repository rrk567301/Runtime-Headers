@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (void)removeControl:(id)a0;
- (void)addControl:(id)a0;
- (id)controls;
- (id)_dictionaryRepresentation;
- (void)removeAllControls;

@end
