@class NSSet, NSString, MCPlugHaven, NSMutableDictionary;

@interface MCContainerNavigator : MCContainer {
    NSMutableDictionary *mPlugs;
}

@property (readonly) NSSet *plugs;
@property (readonly) unsigned long long countOfPlugs;
@property (copy, nonatomic) NSString *startPlugID;
@property (readonly) MCPlugHaven *startPlug;

- (id)init;
- (id)xmlElement;
- (id)imprint;
- (id)plugForID:(id)a0;
- (void)removePlugForID:(id)a0;
- (id)setPlugForContainer:(id)a0 forID:(id)a1;
- (void)demolish;
- (void)removePlug:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)changeIDOfPlug:(id)a0 toID:(id)a1;
- (void)removeAllPlugs;

@end
