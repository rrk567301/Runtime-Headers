@class NSUUID, NSString, NSDictionary;

@interface AXAudioEffectConfiguration : NSObject {
    void /* function */ effectName;
    void /* function */ properties;
    void /* function */ parameters;
}

@property (nonatomic, retain) NSUUID *_identifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *effectName;
@property (nonatomic) BOOL enabled;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSDictionary *parameters;

- (void).cxx_destruct;

@end
