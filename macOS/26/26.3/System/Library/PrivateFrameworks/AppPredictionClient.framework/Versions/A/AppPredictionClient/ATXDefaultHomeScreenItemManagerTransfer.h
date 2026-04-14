@class NSString;

@interface ATXDefaultHomeScreenItemManagerTransfer : NSObject {
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_readSmartStacksWithPath:(id)a0 error:(id *)a1;
- (BOOL)_writeSmartStacks:(id)a0 toPath:(id)a1;
- (void)fetchImportedWidgetSmartStackWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)importWidgetSmartStackWithRequest:(id)a0 response:(id)a1 completionHandler:(id /* block */)a2;
- (id)stringForSmartStackVariant:(unsigned long long)a0;

@end
