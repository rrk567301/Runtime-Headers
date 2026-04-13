@class NSString, NSDictionary;

@interface _AMFinderWindow : SBObject

@property struct CGPoint { double x0; double x1; } position;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) BOOL titled;
@property (readonly, copy) NSString *name;
@property long long index;
@property (readonly) BOOL closeable;
@property (readonly) BOOL floating;
@property (readonly) BOOL modal;
@property (readonly) BOOL resizable;
@property (readonly) BOOL zoomable;
@property BOOL zoomed;
@property (readonly) BOOL visible;
@property BOOL collapsed;
@property (copy) NSDictionary *properties;

- (void)close;
- (void)select;
- (void)activate;
- (id)delete;
- (void)eject;
- (BOOL)exists;
- (long long)id;
- (void)erase;
- (void)emptySecurity:(BOOL)a0;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(BOOL)a1 routingSuppressed:(BOOL)a2;
- (id)moveTo:(id)a0 replacing:(BOOL)a1 positionedAt:(id)a2 routingSuppressed:(BOOL)a3;
- (void)reveal;
- (void)updateNecessity:(BOOL)a0 registeringApplications:(BOOL)a1;

@end
