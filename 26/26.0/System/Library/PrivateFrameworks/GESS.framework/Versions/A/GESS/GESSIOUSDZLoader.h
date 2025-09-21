@interface GESSIOUSDZLoader : GESSAlgBase {
    id /* block */ _progress_cb;
    id /* block */ _error_cb;
}

- (void).cxx_destruct;
- (BOOL)setErrorCallback:(id /* block */)a0;
- (BOOL)run:(id)a0 output:(id)a1;
- (BOOL)setProgressCallback:(id /* block */)a0;

@end
