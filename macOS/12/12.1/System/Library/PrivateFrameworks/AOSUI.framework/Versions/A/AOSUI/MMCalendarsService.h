@class NSString;

@interface MMCalendarsService : MMService <MMServicePreflightProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)icon;
- (void)setEnabled:(BOOL)a0 creating:(BOOL)a1 withWindow:(id)a2 completion:(id /* block */)a3;
- (BOOL)isDataService;

@end
