@class NSArray;

@interface CKDFetchServerCertificatesOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *validatedTrusts;

+ (id)nameForState:(unsigned long long)a0;

- (id)activityCreate;
- (BOOL)makeStateTransition;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void).cxx_destruct;
- (void)fetchServerCertificates;

@end
