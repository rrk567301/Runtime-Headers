@class MPModelObject;

@interface MPCPlayerSuggestLessCommandRequest : MPCPlayerCommandRequest

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (readonly, nonatomic) char value;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0 value:(char)a1 controller:(id)a2 label:(id)a3;

@end
