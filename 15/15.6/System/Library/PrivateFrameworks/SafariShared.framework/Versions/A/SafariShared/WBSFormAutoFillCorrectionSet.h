@class NSString, NSDictionary;

@interface WBSFormAutoFillCorrectionSet : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDictionary *fingerprintsToClassifications;
@property (readonly, nonatomic) NSDictionary *fingerprintsToCorrections;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 fingerprintsToClassifications:(id)a1;
- (id)initWithDomain:(id)a0 fingerprintsToCorrections:(id)a1;

@end
