@class NSNumber;

@interface ASRatingControlStarButton : NSButton

@property (readonly) unsigned long long index;
@property (retain, nonatomic) NSNumber *rating;

- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)setState:(long long)a0;
- (id)_foregroundColorForSubmitted:(BOOL)a0;
- (id)initWithIndex:(unsigned long long)a0 rating:(id)a1;
- (void)updateTintColorForSubmittedRatingState;

@end
