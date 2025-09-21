@interface RTPlaceInferenceQueryStore : RTStore

- (void)_fetchPlaceInferenceQueriesWithDateInterval:(id)a0 ascending:(BOOL)a1 limit:(id)a2 handler:(id /* block */)a3;
- (void)_purgePlaceInferenceQueriesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storePlaceInferenceQuery:(id)a0 handler:(id /* block */)a1;
- (void)fetchPlaceInferenceQueriesWithDateInterval:(id)a0 ascending:(BOOL)a1 handler:(id /* block */)a2;
- (void)fetchPlaceInferenceQueriesWithDateInterval:(id)a0 ascending:(BOOL)a1 limit:(id)a2 handler:(id /* block */)a3;
- (void)purgePlaceInferenceQueriesPredating:(id)a0 handler:(id /* block */)a1;
- (void)storePlaceInferenceQuery:(id)a0 handler:(id /* block */)a1;

@end
