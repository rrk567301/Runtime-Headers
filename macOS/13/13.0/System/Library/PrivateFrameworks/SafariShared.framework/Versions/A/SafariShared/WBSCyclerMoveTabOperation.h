@class NSString;

@interface WBSCyclerMoveTabOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_randomTabGroupInContext:(id)a0 requireTabs:(BOOL)a1 notIntersecting:(id)a2;

@end
