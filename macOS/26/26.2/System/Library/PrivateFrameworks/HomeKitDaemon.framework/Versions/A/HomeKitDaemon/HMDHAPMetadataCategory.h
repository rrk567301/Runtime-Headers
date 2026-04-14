@class NSString, NSNumber;

@interface HMDHAPMetadataCategory : HMFObject <HMHAPMetadataCategory, HMFFastEncodable>

@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *catDescription;
@property (retain, nonatomic) NSNumber *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *catDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hmf_encodeForFastEncoder;
- (id)initWithFastEncodedData:(id)a0;
- (id)initWithIdentifier:(id)a0 uuid:(id)a1 name:(id)a2 description:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
