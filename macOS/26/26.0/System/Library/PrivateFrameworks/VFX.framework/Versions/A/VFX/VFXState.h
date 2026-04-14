@class NSString, NSArray, VFXStateManager, NSMutableArray;

@interface VFXState : NSObject <VFXReferenceEnumerable, VFXState, NSSecureCoding, NSCopying> {
    NSMutableArray *_stateItems;
    VFXState *_baseState;
    NSString *_name;
    NSString *_identifier;
    VFXStateManager *_stateManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) VFXState *baseState;
@property (readonly, nonatomic) NSArray *stateItems;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) VFXStateManager *stateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setStateManager:(id)a0;
- (id)itemMatching:(id)a0;
- (void)addStateItem:(id)a0;
- (void)applyFrom:(id)a0 reverse:(BOOL)a1 transition:(id)a2;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)makeReverseStates;
- (void)removeStateItem:(id)a0;

@end
