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

- (id)node;
- (id)attributes;
- (id)state;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)userInfo;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)_userInfo;
- (id)init;
- (id)key;
- (BOOL)setState:(id)a0;
- (void)dealloc;
- (unsigned long long)_flags;
- (void)_setFlags:(unsigned long long)a0;
- (void)_unsetFlags:(unsigned long long)a0;
- (id)editName:(id)a0 inView:(id)a1;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (id)originalPort;
- (void)portWillDeleteFromNode;
- (void)resetTooltipView;
- (id)setupTooltipView;
- (void)stateUpdated;
- (id)tooltipString;

@end
