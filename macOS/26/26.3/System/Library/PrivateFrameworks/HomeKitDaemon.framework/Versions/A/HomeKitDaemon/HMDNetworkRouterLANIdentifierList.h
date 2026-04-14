@class NSString, NSMutableArray;

@interface HMDNetworkRouterLANIdentifierList : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)serializeWithError:(id *)a0;

@end
