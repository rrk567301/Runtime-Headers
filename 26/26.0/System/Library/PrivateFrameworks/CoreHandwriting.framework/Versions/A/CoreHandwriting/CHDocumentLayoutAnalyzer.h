@class NSString, CHDocumentLayoutAnalysisModel, NSObject;
@protocol OS_dispatch_queue;

@interface CHDocumentLayoutAnalyzer : NSObject <CHDocumentLayoutAnalyzing> {
    long long _maxNumInputStrokes;
    long long _contextNumStrokes;
    long long _contentNumStrokes;
    CHDocumentLayoutAnalysisModel *_documentLayoutAnalysisModel;
    NSObject<OS_dispatch_queue> *_modelDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)analyzeDrawing:(id)a0 strokeIdentifiers:(id)a1 contextStrokeIdentifiers:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4;

@end
