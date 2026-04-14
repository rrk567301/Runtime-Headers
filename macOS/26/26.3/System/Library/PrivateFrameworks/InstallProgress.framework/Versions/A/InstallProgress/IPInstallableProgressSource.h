@class IPInstallableStateSource;
@protocol IPProgressObserver;

@interface IPInstallableProgressSource : NSObject {
    BOOL _resumed;
}

@property (readonly) IPInstallableStateSource *installableStateSource;
@property (weak) id<IPProgressObserver> observer;

- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (id)collationKey;
- (void)notifyOfUpdate:(id)a0;
- (id)currentProgressWithError:(id *)a0;
- (void)finishWithReason:(unsigned long long)a0;
- (id)initWithStateSource:(id)a0;

@end
