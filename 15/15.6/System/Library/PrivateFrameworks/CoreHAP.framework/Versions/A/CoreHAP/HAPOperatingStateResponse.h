@class HAPOperatingStateWrapper, HAPOperatingStateAbnormalReasonsWrapper, NSString;

@interface HAPOperatingStateResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPOperatingStateWrapper *state;
@property (retain, nonatomic) HAPOperatingStateAbnormalReasonsWrapper *abnormalReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithState:(id)a0 abnormalReasons:(id)a1;

@end
