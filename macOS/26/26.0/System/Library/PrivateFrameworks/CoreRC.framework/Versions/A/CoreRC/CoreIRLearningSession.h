@class CoreIRDevice;
@protocol CoreIRLearningSessionBridgeDelegate, CoreIRLearningSessionDelegate;

@interface CoreIRLearningSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) CoreIRDevice *owningDevice;
@property (nonatomic) id<CoreIRLearningSessionBridgeDelegate> bridgeDelegate;
@property (readonly, nonatomic) unsigned long long reason;
@property (nonatomic) id<CoreIRLearningSessionDelegate> delegate;

- (id)initWithReason:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)addMappingWithProtocolID:(unsigned char)a0 options:(unsigned char)a1 commandToMap:(unsigned long long)a2 command:(unsigned long long)a3 repeat:(unsigned long long)a4;
- (void)endLearning;
- (void)enumerateMappingUsingBlock:(id /* block */)a0;
- (BOOL)startLearningCommand:(unsigned long long)a0;

@end
