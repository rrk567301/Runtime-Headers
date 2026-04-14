@interface AppPredictionInternal.ControlDescriptorProvider : SwiftNativeNSObject <CHSWidgetExtensionProviderObserver> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ changeStream;
    void /* unknown type, empty encoding */ changeStreamContinuation;
}

- (id)init;
- (void)extensionsDidChangeForExtensionProvider:(id)a0;

@end
