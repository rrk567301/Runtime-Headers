@class NSString, PKDistributionContainer, NSURL, NSDictionary, PKDistribution, NSArray;

@interface PKProduct : NSObject <PKPackageSource> {
    int _minTrustLevel;
    int _evaluatedTrustLevel;
    NSArray *_certificateChain;
    struct __SecTrust { } *_trustRef;
    char _allowExpiredCerts;
    char _allowExpiredRoots;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *productType;
@property (readonly) NSString *productIdentifier;
@property (readonly) NSString *productVersion;
@property (readonly) PKDistribution *distribution;
@property (readonly) PKDistributionContainer *distributionContainer;
@property (readonly) NSDictionary *stringsDictionary;
@property (readonly) NSArray *allPackageReferences;

+ (char)canInitWithURL:(id)a0;
+ (id)productByLoadingProductAtURL:(id)a0 error:(id *)a1;
+ (id)_allProductClasses;
+ (char)_allowsFolderArchives;
+ (void)_setAllowsFolderArchives:(char)a0;

- (void)dealloc;
- (char)evaluateTrustReturningError:(id *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (void)setMinimumRequiredTrustLevel:(int)a0;
- (int)trustLevelReturningCertificateChain:(id *)a0;
- (id)_archiveForTrustEvaluation;
- (id)_distributionArchivePath;
- (id)_distributionFlatData;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)resourceDataForKey:(id)a0 returningMIMEType:(id *)a1 returningUTI:(id *)a2;
- (void)setAllowExpiredCertificates:(char)a0;
- (void)setAllowExpiredRoots:(char)a0;
- (int)trustLevelReturningTrustRef:(struct __SecTrust **)a0;

@end
