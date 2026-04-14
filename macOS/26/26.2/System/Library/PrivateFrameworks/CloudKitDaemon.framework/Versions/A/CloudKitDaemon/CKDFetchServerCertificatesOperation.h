@class NSArray;

@interface CKDFetchServerCertificatesOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *validatedTrusts;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)activityCreate;
- (void)main;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;
- (void)fetchServerCertificates;

@end
