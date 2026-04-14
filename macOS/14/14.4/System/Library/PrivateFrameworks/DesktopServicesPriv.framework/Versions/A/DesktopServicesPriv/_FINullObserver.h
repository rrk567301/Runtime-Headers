@interface _FINullObserver : NSObject <FINodeObserverProtocol>

- (void)childNodePropertyChanged:(id)a0 forProperty:(unsigned int)a1;
- (void)childNodesAdded:(id)a0;
- (void)childNodesDeleted:(id)a0;
- (void)nodeDeleted:(id)a0;
- (void)nodePropertyChanged:(id)a0 forProperty:(unsigned int)a1;

@end
