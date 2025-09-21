@class NSArray;

@interface CKDFetchServerCertificatesOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *validatedTrusts;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (void)fetchServerCertificates;
- (char)makeStateTransition;
- (char)shouldCheckAppVersion;

@end
