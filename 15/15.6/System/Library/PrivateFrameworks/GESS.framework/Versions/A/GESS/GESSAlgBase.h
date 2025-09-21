@interface GESSAlgBase : NSObject {
    id /* block */ _progress_callback;
    id /* block */ _error_callback;
}

@property int algStatus;

- (id)init;
- (char)run;
- (void).cxx_destruct;
- (char)setErrorCallback:(id /* block */)a0;
- (id)returnReport;
- (char)setProgressCallback:(id /* block */)a0;

@end
