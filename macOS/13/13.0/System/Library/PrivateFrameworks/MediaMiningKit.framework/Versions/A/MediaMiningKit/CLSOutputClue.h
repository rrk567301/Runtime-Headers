@class NSMutableArray, CLSEvent, CLSPersonIdentity, CLSPlace;

@interface CLSOutputClue : CLSClue {
    NSMutableArray *_relatedInputTimeClues;
    NSMutableArray *_relatedInputLocationClues;
    NSMutableArray *_relatedInputPeopleClues;
}

@property (retain) CLSPlace *relatedPlace;
@property (retain) CLSPersonIdentity *relatedPerson;
@property (retain) CLSEvent *relatedEvent;

+ (id)clueWithValue:(id)a0 forKey:(id)a1;
+ (id)clueWithValue:(id)a0 forKey:(id)a1 confidence:(double)a2 relevance:(double)a3;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToClue:(id)a0;
- (void)addRelatedInputClues:(id)a0;
- (id)relatedInputClues;
- (id)relatedInputLocationClues;
- (id)relatedInputPeopleClues;
- (id)relatedInputTimeClues;

@end
