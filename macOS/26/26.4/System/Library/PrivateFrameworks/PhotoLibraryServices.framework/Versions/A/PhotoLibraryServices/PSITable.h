@protocol PSITableDelegate;

@interface PSITable : NSObject {
    BOOL _finalizzeWasCalled;
}

@property (readonly, weak) id<PSITableDelegate> delegate;

- (void)clear;
- (void)finalizze;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2;

@end
