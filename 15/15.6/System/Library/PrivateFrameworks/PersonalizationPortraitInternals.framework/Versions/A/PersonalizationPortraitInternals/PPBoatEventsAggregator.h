@interface PPBoatEventsAggregator : PPEventsAggregator

- (char)isEvent:(id)a0 dupeOfEvent:(id)a1;
- (id)tripCandidatesFromEventsPool;

@end
