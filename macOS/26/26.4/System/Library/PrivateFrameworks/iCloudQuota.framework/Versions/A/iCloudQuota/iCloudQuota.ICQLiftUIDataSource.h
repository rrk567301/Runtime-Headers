@interface iCloudQuota.ICQLiftUIDataSource : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backupDeviceUUID;
}

- (id)initWithAccount:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
