@protocol PSITableDelegate;

@interface PSITable : NSObject {
    char _finalizzeWasCalled;
}

@property (readonly, weak) id<PSITableDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clear;
- (void)finalizze;
- (id)initWithDelegate:(id)a0 searchable:(char)a1 writable:(char)a2;

@end
