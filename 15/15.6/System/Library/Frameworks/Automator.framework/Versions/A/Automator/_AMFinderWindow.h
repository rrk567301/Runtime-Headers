@class NSString, NSDictionary;

@interface _AMFinderWindow : SBObject

@property struct CGPoint { double x0; double x1; } position;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) char titled;
@property (readonly, copy) NSString *name;
@property long long index;
@property (readonly) char closeable;
@property (readonly) char floating;
@property (readonly) char modal;
@property (readonly) char resizable;
@property (readonly) char zoomable;
@property char zoomed;
@property (readonly) char visible;
@property char collapsed;
@property (copy) NSDictionary *properties;

- (void)close;
- (void)select;
- (void)activate;
- (id)delete;
- (long long)id;
- (void)eject;
- (char)exists;
- (void)erase;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(char)a1 routingSuppressed:(char)a2;
- (void)emptySecurity:(char)a0;
- (id)moveTo:(id)a0 replacing:(char)a1 positionedAt:(id)a2 routingSuppressed:(char)a3;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (void)reveal;
- (void)updateNecessity:(char)a0 registeringApplications:(char)a1;

@end
