@interface CSKStreamObserverRemovalTask : CSKStreamObserverTask

+ (id)name;

- (void)notifyObserverForObserverDataBatch:(id)a0;
- (char)skipsFiltering;

@end
