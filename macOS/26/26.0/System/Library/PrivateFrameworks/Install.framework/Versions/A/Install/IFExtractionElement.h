@class NSDictionary;

@interface IFExtractionElement : IFTaskElement {
    NSDictionary *_remoteExtractionBOMErrorDictionary;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)init;
- (id)description;
- (void)_packageExtractionErrorNotificationHandler:(id)a0;
- (void)setInstallElement:(id)a0;

@end
