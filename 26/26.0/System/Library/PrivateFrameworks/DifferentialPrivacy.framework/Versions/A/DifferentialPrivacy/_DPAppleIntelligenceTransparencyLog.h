@class NSArray, NSString;

@interface _DPAppleIntelligenceTransparencyLog : NSObject <_DPTransparencyLog>

@property (readonly, nonatomic) NSArray *donations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDonations:(id)a0 error:(id *)a1;
- (BOOL)writeToDiskWithError:(id *)a0;

@end
