@interface CalDelegateHandler : NSObject

+ (void)refreshDelegateListForAccount:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)parseResponse:(id)a0 error:(id *)a1;
+ (id)_getGrantedDelegateListForCalDAVAccount:(id)a0 allowExpand:(BOOL)a1 error:(id *)a2;
+ (BOOL)_updateGrantedDelegatesListWithAdd:(id)a0 remove:(id)a1 forCalDAVAccount:(id)a2 withError:(id *)a3;
+ (BOOL)addDelegate:(id)a0 toAccount:(id)a1 withError:(id *)a2;
+ (BOOL)removeDelegate:(id)a0 fromAccount:(id)a1 withError:(id *)a2;
+ (id)getGrantedDelegateListForAccount:(id)a0 withError:(id *)a1;
+ (BOOL)addGrantedDelegate:(id)a0 toAccount:(id)a1 withError:(id *)a2;
+ (BOOL)removeGrantedDelegate:(id)a0 toAccount:(id)a1 withError:(id *)a2;
+ (BOOL)toggleAllowWriteForGrantedDelegate:(id)a0 toAccount:(id)a1 withError:(id *)a2;

@end
