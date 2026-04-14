@interface AudioDSPManagerSwift.InteropLayerSystemConfigurationDatabaseEntry : NSObject {
    void /* unknown type, empty encoding */ ioSemantic;
    void /* unknown type, empty encoding */ dspSelection;
    void /* unknown type, empty encoding */ graphFilePath;
    void /* unknown type, empty encoding */ propStripFilePaths;
    void /* unknown type, empty encoding */ tuningStripFilePaths;
    void /* unknown type, empty encoding */ graphFlavor;
    void /* unknown type, empty encoding */ auPresetOverrideConfig;
    void /* unknown type, empty encoding */ properties;
}

- (id)init;
- (void).cxx_destruct;
- (id)getDSPSelection;
- (id)getGraphFilePath;
- (id)getGraphFlavor;
- (id)getIOSemantic;
- (id)getPropStripFilePaths;
- (id)getPropertyOverrides;
- (id)getTuningStripFilePaths;

@end
