@class NSString;

@interface _NSCGSWindowServerOrderingState : NSObject <_NSCGSWindowOrderingState> {
    struct _SLSTransaction { } *_txn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)commit;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setDesiredSpace:(unsigned long long)a0 forWindow:(id)a1;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (void)unlockWindowSublevel:(id)a0;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)clearOrderingGroup:(id)a0;
- (void)orderWindow:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)orderGroup:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)conditionallyOrderGroupFront:(id)a0 withTimestamp:(double)a1;
- (void)orderApplicationWindowsFront;
- (id)initWithSLSTransaction:(struct _SLSTransaction { } *)a0;

@end
