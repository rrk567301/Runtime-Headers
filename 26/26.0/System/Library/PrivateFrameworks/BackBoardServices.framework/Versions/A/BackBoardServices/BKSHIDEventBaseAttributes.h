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

+ (unsigned char)_eventAttributeType;
+ (id)baseAttributesFromProvider:(id)a0;
+ (Class)_classForAttributeType:(unsigned char)a0;
+ (id)protobufSchema;
+ (id)deserializeFromBytes:(const char *)a0 byteCount:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)serializedData;
- (id)succinctDescription;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
