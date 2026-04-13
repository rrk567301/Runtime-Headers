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
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)userInfo;
- (id)_userInfo;
- (id)state;
- (unsigned long long)_flags;
- (BOOL)setState:(id)a0;
- (id)node;
- (id)attributes;
- (id)key;
- (void)_setFlags:(unsigned long long)a0;
- (void)stateUpdated;
- (id)originalPort;
- (void)_unsetFlags:(unsigned long long)a0;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (void)portWillDeleteFromNode;
- (id)editName:(id)a0 inView:(id)a1;
- (id)setupTooltipView;
- (void)resetTooltipView;
- (id)tooltipString;

@end
