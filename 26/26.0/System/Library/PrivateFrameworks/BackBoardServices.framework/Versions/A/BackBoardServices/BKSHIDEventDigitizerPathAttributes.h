@class NSString, BKSHIDEventDeferringChangeBasis, BKSHIDEventAuthenticationMessage, BKSHIDEventSimpleProvenance, BKSWindowServerHitTestSecurityAnalysis;
@protocol BKSHIDEventProvenance;

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable> {
    BKSHIDEventSimpleProvenance *_simpleProvenance;
}

@property (nonatomic) long long pathIndex;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) unsigned int userIdentifier;
@property (nonatomic) unsigned char locus;
@property (nonatomic) float zGradient;
@property (nonatomic) struct CGPoint { double x; double y; } hitTestLocation;
@property (nonatomic) struct CGPoint { double x; double y; } preciseLocation;
@property (nonatomic) long long hitTestContextCategory;
@property (nonatomic) double hitTestLocationX;
@property (nonatomic) double hitTestLocationY;
@property (nonatomic) double preciseLocationX;
@property (nonatomic) double preciseLocationY;
@property (retain, nonatomic) id<BKSHIDEventProvenance> provenance;
@property (readonly, nonatomic) BKSHIDEventDeferringChangeBasis *changeBasis;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (retain, nonatomic) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (void)setPreciseLocationX:(double)a0;
- (void)setHitTestLocationY:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)hitTestLocationY;
- (double)preciseLocationX;
- (double)hitTestLocationX;
- (void)setPreciseLocationY:(double)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (double)preciseLocationY;
- (void)setHitTestLocationX:(double)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
