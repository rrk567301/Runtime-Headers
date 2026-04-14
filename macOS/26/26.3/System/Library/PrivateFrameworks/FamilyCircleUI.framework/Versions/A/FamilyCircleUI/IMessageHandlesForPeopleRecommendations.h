@interface IMessageHandlesForPeopleRecommendations : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)getRecommendationsWith:(id)a0 completion:(id /* block */)a1;

@end
