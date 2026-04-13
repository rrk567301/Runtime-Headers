@class NSLock, SCRCThreadKey, SCRCTargetSelectorTimer, NSConditionLock, SCRUIElement, SCRCStackQueue, SCRCIndexMap, NSMutableArray;

@interface SCRElementHash : NSObject {
    BOOL _isDone;
    BOOL _usesSameThread;
    BOOL _doesMakeHashMarkersForAllChildren;
    BOOL _isElementHashHeld;
    BOOL _shouldStop;
    BOOL _didStart;
    NSMutableArray *_markerList;
    SCRCIndexMap *_markerMap;
    SCRCStackQueue *_processingStack;
    SCRCTargetSelectorTimer *_restTimer;
    SCRUIElement *_rootElement;
    unsigned long long _numberOfElementsSaved;
    unsigned long long _totalElementsRetrieved;
    double _fillTime;
    long long _lastDeterminedGroupIndex;
    NSConditionLock *_pausedLock;
    NSLock *_usageLock;
    struct CGPoint { double x; double y; } _windowPosition;
    SEL _indexReachedCallback;
    id _indexReachedTarget;
    long long _indexReachedIndex;
    SCRCThreadKey *_indexReachedThreadKey;
    SEL _doneCallback;
    id _doneTarget;
    SCRCThreadKey *_doneThreadKey;
    SCRCThreadKey *_threadKey;
}

+ (void)initialize;
+ (id)elementHashKey:(id)a0;
+ (void)setExcludesCompoundChildren:(BOOL)a0;
+ (id /* block */)childrenCountGetterForRoleHash:(unsigned long long)a0;
+ (id /* block */)childrenAtIndexWithLengthGetterForRoleHash:(unsigned long long)a0;
+ (void)populateElementHashAttributes:(id)a0 andMask:(unsigned long long *)a1 forTextAttributes:(id)a2 andString:(id)a3;
+ (void)assignAttributesToElementMarker:(id)a0 uiElement:(id)a1 withParentRoleHash:(unsigned long long)a2;
+ (BOOL)isRoleCompound:(id)a0;
+ (id /* block */)childrenGetterForRoleHash:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isDone;
- (void)_fill;
- (BOOL)beginElementHashUsage;
- (id)elementHashMarkerList;
- (void)endElementHashUsage;
- (void)determineGroups;
- (unsigned long long)elementHashMarkerIndexForUIElement:(id)a0 withContext:(id)a1;
- (void)_refill;
- (id)_saveElementHash:(id)a0 withAXChildIndex:(unsigned long long)a1 withParentRoleHash:(unsigned long long)a2;
- (void)_performDoneCallback:(id)a0 selector:(id)a1 threadKey:(id)a2;
- (id)_compoundHashMarkersForUIElement:(id)a0 withAXChildIndex:(unsigned long long)a1;
- (id)_createGroupsInFirstPass;
- (void)_secondPass:(id)a0;
- (void)_determineGroups;
- (void)registerDoneCallback:(SEL)a0 withThreadKey:(id)a1 onTarget:(id)a2;
- (void)registerIndexReachedCallback:(SEL)a0 forIndex:(long long)a1 withThreadKey:(id)a2 onTarget:(id)a3;
- (BOOL)haveGroupsBeenDetermined;
- (void)refill;
- (struct CGPoint { double x0; double x1; })initialWindowPosition;
- (void)startFillWithElement:(id)a0 synchronous:(BOOL)a1;
- (BOOL)hasHashMarkersForAllChildren;

@end
