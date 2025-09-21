@class NSString, NSData, NSDate;

@interface SiriReferenceResolutionDataModel.RRAnnotatedEntity : NSObject {
    void /* function */ id;
    void /* function */ appBundleId;
    void /* unknown type, empty encoding */ usoEntity;
    void /* unknown type, empty encoding */ typedValue;
    void /* function */ dataType;
    void /* function */ data;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ saliencyComputedAt;
    void /* unknown type, empty encoding */ onScreenSaliencyAdjustment;
    void /* unknown type, empty encoding */ annotations;
    void /* function */ userId;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic) double score;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *foregroundedAt;
@property (nonatomic, copy) NSDate *nearbyAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setDateAnnotationWithKey:(id)a0 value:(id)a1;

@end
