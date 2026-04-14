@class NSString, NSDictionary;

@interface VCCommandObjC : NSObject {
    void /* unknown type, empty encoding */ representedCommand;
}

@property (class, nonatomic, readonly) BOOL currentDeviceHasSwiftCodingModeSupportForLocale;
@property (class, nonatomic, readonly) BOOL currentDeviceHasLegacyEngine;

@property (nonatomic, readonly) NSString *commandIdentifier;
@property (nonatomic, readonly) NSDictionary *commandProperties;
@property (nonatomic, readonly) BOOL isNewForCurrentDevice;
@property (nonatomic, readonly) BOOL showCodingGuideInSettings;

+ (id)allCommandIdentifiers;
+ (id)allCommandIdentifiersForCarPlayDevice;
+ (id)allCommandIdentifiersForCurrentDevice;
+ (id)allCommandIdentifiersForIPadDevice;
+ (id)allCommandIdentifiersForIPhoneDevice;
+ (id)allCommandIdentifiersForIPodDevice;
+ (id)allCommandIdentifiersForMacLegacyDevice;
+ (id)allCommandIdentifiersForMacQuasarDevice;
+ (id)allCommandIdentifiersForVisionDevice;
+ (id)commandWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
