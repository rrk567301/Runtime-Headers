@class NSString, NSData, NSMutableArray, HAPWebRTCOfferStatusWrapper;

@interface HAPWebRTCSolicitOfferResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *sessionIdentifier;
@property (retain, nonatomic) NSData *SDPOffer;
@property (retain, nonatomic) NSMutableArray *additionalCandidates;
@property (retain, nonatomic) HAPWebRTCOfferStatusWrapper *status;
@property (retain, nonatomic) NSData *KID;
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
- (id)initWithSessionIdentifier:(id)a0 SDPOffer:(id)a1 additionalCandidates:(id)a2 status:(id)a3 KID:(id)a4;

@end
