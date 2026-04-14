@class NSXPCInterface;

@interface _NSXPCConnectionExportInfo : NSObject {
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
