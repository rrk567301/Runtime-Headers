@class NSDictionary, NSArray, NSData;

@interface PS190TatsuRequestCreatorOS : PS190SoCRestoreInfoHelperOS {
    NSArray *_deviceInfoArray;
    NSData *_firmwareData;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (char)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (char)parseOptions:(id)a0;

@end
