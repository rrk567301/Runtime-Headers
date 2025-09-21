@class NSString, NSMutableDictionary;

@interface SKGItemMonitor : NSObject <SKGItemMonitorProtocol> {
    NSString *_resourcePath;
    NSMutableDictionary *_domains;
}

- (void)load;
- (void)clear;
- (void)flush;
- (void).cxx_destruct;
- (void)addSeenItem:(id)a0 bundle:(id)a1 persona:(id)a2 protectionClass:(id)a3;
- (long long)domainCount;
- (BOOL)haveSeenItem:(id)a0 bundle:(id)a1 persona:(id)a2 protectionClass:(id)a3;
- (id)initWithResourceDirectoryPath:(id)a0;
- (long long)personaCountOfDomain:(id)a0;
- (void)purgeOld:(id)a0;

@end
