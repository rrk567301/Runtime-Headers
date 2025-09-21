@class NSString, NSXPCConnection;

@interface CHRemoteDocumentLayoutAnalyzer : NSObject <CHDocumentLayoutAnalyzing> {
    NSXPCConnection *_connection;
}

@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)analyzeDrawing:(id)a0 strokeIdentifiers:(id)a1 contextStrokeIdentifiers:(id)a2 options:(id)a3 error:(id *)a4;

@end
