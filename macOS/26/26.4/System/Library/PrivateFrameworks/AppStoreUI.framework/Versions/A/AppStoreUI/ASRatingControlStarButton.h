@class NSNumber;

@interface ASRatingControlStarButton : NSButton

@property (readonly) unsigned long long index;
@property (retain, nonatomic) NSNumber *rating;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)setState:(long long)a0;
- (BOOL)isFlipped;
- (id)_foregroundColorForSubmitted:(BOOL)a0;
- (id)initWithIndex:(unsigned long long)a0 rating:(id)a1;
- (void)updateTintColorForSubmittedRatingState;

@end
