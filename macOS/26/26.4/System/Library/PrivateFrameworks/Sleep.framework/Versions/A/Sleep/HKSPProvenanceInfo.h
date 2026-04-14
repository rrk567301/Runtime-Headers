@class NSString;

@interface HKSPProvenanceInfo : NSObject

@property (class, readonly, copy, nonatomic) HKSPProvenanceInfo *unknownProvenance;

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *presentation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSource:(id)a0 presentation:(id)a1;
- (BOOL)isEqualToProvenanceInfo:(id)a0;

@end
