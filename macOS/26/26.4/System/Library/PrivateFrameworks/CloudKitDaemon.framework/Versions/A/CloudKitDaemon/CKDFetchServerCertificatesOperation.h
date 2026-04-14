@class NSArray;

@interface CKDFetchServerCertificatesOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *validatedTrusts;

+ (id)nameForState:(unsigned long long)a0;

- (id)activityCreate;
- (void)main;
- (BOOL)makeStateTransition;
- (void).cxx_destruct;
- (BOOL)shouldCheckAppVersion;
- (void)fetchServerCertificates;

@end
