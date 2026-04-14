@class NSDictionary, GFNode, NSMutableDictionary;

@interface GFPort : NSObject <GFBase> {
    unsigned long long _flags;
    GFNode *_owner;
    GFPort *_originalPort;
    NSDictionary *_attributes;
    NSMutableDictionary *_userInfo;
    GFPort *_rootPort;
    void *_unused[3];
}

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)init;
- (id)userInfo;
- (id)_userInfo;
- (void)_setFlags:(unsigned long long)a0;
- (unsigned long long)_flags;
- (id)state;
- (BOOL)setState:(id)a0;
- (id)node;
- (id)attributes;
- (id)key;
- (void)stateUpdated;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)portWillDeleteFromNode;
- (id)originalPort;
- (void)_unsetFlags:(unsigned long long)a0;
- (id)editName:(id)a0 inView:(id)a1;
- (void)resetTooltipView;
- (id)tooltipString;
- (id)setupTooltipView;

@end
