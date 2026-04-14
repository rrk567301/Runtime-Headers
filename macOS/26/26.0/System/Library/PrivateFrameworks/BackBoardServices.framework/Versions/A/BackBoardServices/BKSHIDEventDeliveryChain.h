@class BKSHIDEventDeferringSelectionPathIdentifier, NSArray, NSSet, BKSEventDeferringChainIdentity, BKSHIDEventDisplay, NSString, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeliveryChain : NSObject <BSDescriptionStreamable, NSSecureCoding, BSProtobufSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL containsEndOfChain;
@property (readonly, nonatomic) BKSEventDeferringChainIdentity *identity;
@property (readonly, nonatomic) BKSHIDEventDisplay *compatibilityDisplay;
@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) BKSHIDEventDeferringSelectionPathIdentifier *selectionPath;
@property (readonly, copy, nonatomic) NSArray *deferringPath;
@property (readonly, copy, nonatomic) NSSet *modalities;
@property (readonly, nonatomic) BOOL containsSubset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)_dataProtobufEncoded;
- (id)_protobufDecodedFromData:(id)a0;
- (id)initWithIdentity:(id)a0 compatibilityDisplay:(id)a1 path:(id)a2;
- (id)initWithIdentity:(id)a0 compatibilityDisplay:(id)a1 selectionPath:(id)a2 path:(id)a3 modalities:(id)a4;
- (id)initWithIdentity:(id)a0 compatibilityDisplay:(id)a1 selectionPath:(id)a2 path:(id)a3 modalities:(id)a4 containsSubset:(BOOL)a5 containsEndOfChain:(BOOL)a6;
- (id)subsetForPID:(int)a0;

@end
