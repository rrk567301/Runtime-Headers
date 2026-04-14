@class SAStrokeDataInternal;

@interface SAStrokeData : NSObject

@property (retain, nonatomic) SAStrokeDataInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithCharacters:(id)a0 strokeAnimationRepresention:(id)a1 strokeNames:(id)a2 pronunciations:(id)a3;
- (id)initWithCharacter:(id)a0 strokeAnimationRepresention:(id)a1 strokeNames:(id)a2 pronunciation:(id)a3;

@end
