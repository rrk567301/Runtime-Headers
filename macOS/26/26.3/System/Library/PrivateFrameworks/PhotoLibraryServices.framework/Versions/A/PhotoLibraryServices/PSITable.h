@protocol PSITableDelegate;

@interface PSITable : NSObject {
    BOOL _finalizzeWasCalled;
}

@property (readonly, weak) id<PSITableDelegate> delegate;

- (void)finalizze;
- (void)clear;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2;

@end
