@class NSString, NSDictionary;

@interface AVCaptureQualityItem : NSObject {
    NSString *_localizedName;
    NSDictionary *_options;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sessionPreset;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToSession:(id)a0;
- (id)initWithSessionPreset:(id)a0 localizedName:(id)a1;

@end
