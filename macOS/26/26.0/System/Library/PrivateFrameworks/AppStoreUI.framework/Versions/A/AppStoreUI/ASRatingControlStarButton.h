@class NSNumber;

@interface ASRatingControlStarButton : NSButton

@property (readonly) unsigned long long index;
@property (retain, nonatomic) NSNumber *rating;

- (void)setState:(long long)a0;
- (void)mouseDown:(id)a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (id)_foregroundColorForSubmitted:(BOOL)a0;
- (id)initWithIndex:(unsigned long long)a0 rating:(id)a1;
- (void)updateTintColorForSubmittedRatingState;

@end
