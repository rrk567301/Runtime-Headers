@class NSMutableArray;

@interface NSServiceListener : NSObject {
    NSMutableArray *serviceProviders;
}

- (id)providerRespondingToSelector:(SEL)a0;
- (void)addServiceProvider:(id)a0;
- (void)removeServiceProvider:(id)a0;
- (BOOL)_doInvokeServiceIn:(id)a0 msg:(id)a1 pb:(id)a2 userData:(id)a3 error:(id *)a4 unhide:(BOOL)a5;

@end
