@interface IMAVControlBar : NSObject

+ (id)sharedControlBar;

- (void)removeControl:(id)a0;
- (id)controls;
- (id)_dictionaryRepresentation;
- (void)addControl:(id)a0;
- (void)removeAllControls;

@end
