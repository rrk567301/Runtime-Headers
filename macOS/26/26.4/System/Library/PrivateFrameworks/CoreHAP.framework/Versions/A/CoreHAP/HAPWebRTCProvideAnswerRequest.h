@class NSData, NSMutableArray, NSString;

@interface HAPWebRTCProvideAnswerRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *sessionIdentifier;
@property (retain, nonatomic) NSData *SDPAnswer;
@property (retain, nonatomic) NSMutableArray *additionalCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithSessionIdentifier:(id)a0 SDPAnswer:(id)a1 additionalCandidates:(id)a2;

@end
