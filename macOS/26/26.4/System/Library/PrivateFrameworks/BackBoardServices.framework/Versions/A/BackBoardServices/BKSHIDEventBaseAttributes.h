@class BKSHIDEventSimpleProvenance, NSString, BKSHIDEventDeferringChangeBasis, BKSHIDEventAuthenticationMessage, BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;
@protocol BKSHIDEventProvenance;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable> {
    BKSHIDEventSimpleProvenance *_simpleProvenance;
}

@property (retain, nonatomic) id<BKSHIDEventProvenance> provenance;
@property (readonly, nonatomic) BKSHIDEventDeferringChangeBasis *changeBasis;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) int source;
@property (nonatomic) unsigned short options;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)baseAttributesFromProvider:(id)a0;
+ (unsigned char)_eventAttributeType;
+ (Class)_classForAttributeType:(unsigned char)a0;
+ (id)deserializeFromBytes:(const char *)a0 byteCount:(long long)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)serializedData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;

@end
