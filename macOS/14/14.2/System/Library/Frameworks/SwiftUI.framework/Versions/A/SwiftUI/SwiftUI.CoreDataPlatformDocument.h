@interface SwiftUI.CoreDataPlatformDocument : SwiftUI.PlatformDocument {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ tempDocument;
    void /* unknown type, empty encoding */ storeName;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (BOOL)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 ofType:(id)a1 error:(id *)a2;

@end
